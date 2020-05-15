// Problem : Chef and Subset
// Contest : CodeChef - Practice(Easy)
// URL : https://www.codechef.com/problems/CHEFSETC
// Memory Limit : 256 MB
// Time Limit : 500 ms
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
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
#define mod 1e9

double EPS = 1e-9; 
int INF = 1000000005; 
long long INFF = 1000000000000000005LL; 
double PI = acos(-1);


int main(){
    fastIO

    int t;
    cin>>t;
    int arr[4];
    while(t--){
    	for(int i=0;i<4;i++){
    		cin>>arr[i];
    	}
    	bool flag = false;
    	for(int N=1;N<16;N++){
    		int sum = 0;
    		for(int i=0;i<4;i++){
    			if(N & (1<<i)){
    				sum += arr[i];
    			}
    		}
    		if(sum==0){
    			flag = true;
    			break;
    		}
    	}
    	if(flag) cout<<"Yes\n";
    	else cout<<"No\n";
    }

    return 0;
}