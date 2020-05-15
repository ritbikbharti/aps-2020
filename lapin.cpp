
// Problem : Lapindromes
// Contest : CodeChef - DSA Learning Series - Contest 1
// URL : https://www.codechef.com/LRNDSA01/problems/LAPIN
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Author : Ritbik Bharti

#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define clr(a,x) memset(a,x,sizeof(a));
#define print1d(mat,n){for(int i=0;i<(int)(n);i++)cout<<mat[i]<<" ";cout<<endl;}
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define print(v) for(const auto itr:v){ cout << itr << ' ';} cout << endl;
#define mod 1e9;

int main(){
    fastIO

    int t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	int len = s.length();
    	
        string a = s.substr(0, (len + 1) / 2);
        string b = s.substr(len - (len + 1)/2, (len + 1) / 2);

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (a == b)
        	cout<<"YES\n";
        else
        	cout<<"NO\n";
    }

    return 0;
}