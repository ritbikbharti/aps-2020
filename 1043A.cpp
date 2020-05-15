
// Problem : A. Elections
// Contest : Codeforces - Codeforces Round #519 by Botan Investments
// URL : https://codeforces.com/problemset/problem/1043/A
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
    
    int n;
	cin >> n;
	vi a(n);
	int sum = 0;
	int mx = -1;
	for (int i = 0; i < n; i++) {
	  cin >> a[i];
	  sum += a[i];
	  mx = max(mx, a[i]);
	}
	int ans = (2 * sum + n) / n;
	cout << max(mx, ans) << endl;
	
  	return 0;
}