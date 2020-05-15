
// Problem : Connected Components in a Graph
// Contest : HackerEarth
// URL : https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/
// Memory Limit : 256 MB
// Time Limit : 5000 ms
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

vi ar[100001];
int vis[100001];

void dfs(int node){
	
	vis[node] = 1;
	
	for(int child : ar[node])
	if(!vis[child])
	dfs(child);
}

int main(){
    fastIO

    int n,e;
    cin>>n>>e;
    while(e--){
    	int a,b;
    	cin>>a>>b;
    	ar[a].pb(b);
    	ar[b].pb(a);
    }
    
    int count = 0;
	for( int i=1;i<=n;i++)
	if(!vis[i])
	dfs(i) , count++;
	
	cout<<count;

    return 0;
}