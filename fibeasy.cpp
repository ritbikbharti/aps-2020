#include<bits/stdc++.h>
using namespace std;

int fib(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fib(x-1)+fib(x-2));
   }
}

bool is_IndexEven(int i) 
{
  static int k = 1;

  if(k == 1)
  {
      k++;
      return false;
  }

  if(k++ % 2)
       return true;
  else 
       return false; 
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<int> v;
        int n,i=0;
        cin >> n;
        while(i<n)
        {
            v.push_back(fib(i)%10);
            i++;
        }

        for (int i = 0; i < v.size(); i++) 
            cout << v[i] << " ";

        cout<<"\n";

        //while(v.size()!=1) {
            v.erase( remove_if(v.begin(), v.end(), is_IndexEven), v.end() );
        //}

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }

        cout<<"\n";
        
    }
    return 0;
}