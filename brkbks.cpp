#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int s,w1,w2,w3,count=0;
    while(t--){
        cin>>s>>w1>>w2>>w3;

        if(w1+w2+w3<=s)
            cout<<1<<endl;

        else if(w1+w2>S) {
				if(w2+w3<=S)
					cout<<2<<endl;
				else
					cout<<3<<endl;
			}

			else
				cout<<2<<endl;
    }
    return 0;
}