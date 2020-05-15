// Problem : Fire Escape Routes
// Contest : CodeChef - Practice(Easy)
// URL : https://www.codechef.com/problems/FIRESC
// Memory Limit : 256 MB
// Time Limit : 3000 ms
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
#define mod 1000000000

double EPS = 1e-9; 
int INF = 1000000005; 
long long INFF = 1000000000000000005LL; 
double PI = acos(-1);

vi ar[100001];
int vis[100001];
int cc_size;

void dfs(int node){
	vis[node] = 1;
	cc_size++;

	for(int child : ar[node])
	if(!vis[child])
	dfs(child);
}

int main(){
    fastIO

    int t,n,m,a,b;
    cin>>t;
    while(t--){
    	cin>>n>>m;
    	for(int i=1;i<=n;i++) vis[i]=0 , ar[i].clear();
    	
    	for(int i=1;i<=m;i++) cin>>a>>b , ar[a].pb(b) , ar[b].pb(a);
    	
    	int count = 0;
    	ll res = 1;
    	
    	for(int i=1;i<=n;i++){
    		if(vis[i]==0){
    			cc_size=0;
    			dfs(i) , count++;
    		
    			res = (res * cc_size) % mod;
    		}
    	}
    	
    	cout<<count<<" "<<res<<endl;
    	
    }

    return 0;
}