// Problem : A. Watermelon
// Contest : Codeforces - Codeforces Beta Round #4 (Div. 2 Only)
// URL : http://codeforces.com/problemset/problem/4/A
// Memory Limit : 64 MB
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

void dfs(int node){
	vis[node] = 1;

	for(int child : ar[node])
	if(!vis[child])
	dfs(child);
}

int main(){
    fastIO

    int t;
    cin>>t;
    if(t==2) cout<<"NO\n";
    else if(t%2==0) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}