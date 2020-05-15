// Problem : Longest path in a tree
// Contest : SPOJ - Classical
// URL : https://www.spoj.com/problems/PT07Z/
// Memory Limit : 1536 MB
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

vi ar[100001];
int vis[100001];
int maxD, maxNode;

void dfs(int node, int d){
	vis[node] = 1;
	
	if(d>maxD) maxD = d, maxNode = node;
	for(int child : ar[node])
	if(!vis[child])
	dfs(child, d+1);
}

int main(){
    fastIO

    int n;
    cin>>n;
    for(int i=1;i<=n-1;i++){
    	int a,b;
    	cin>>a>>b;
    	ar[a].pb(b);
    	ar[b].pb(a);
    }
    
    maxD = -1;
    dfs(1, 0);
    for(int i=1;i<=n;i++) vis[i]=0;
    maxD = -1;
    dfs(maxNode, 0);
    cout<<maxD;

    return 0;
}