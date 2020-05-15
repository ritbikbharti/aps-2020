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

const int N = 1e6 + 5;
int prime_factor[N + 5];  // = {0}
vector<pair<int, int>> prime_factors[N+5];
//

bool square_free(int x){
	for(auto v: prime_factors[x]){
		if(v.second > 1) return 0;
	}
	return 1;
}

int main(){
    fastIO

    int  N;
    cin>>N;
    for( int i=2;i<=N;i++){
    	if(prime_factor[i] != 0) continue;
    	prime_factor[i] = i;
    	for(int j=2*i;j<=N;j++){
    		prime_factor[j] = i;
    	}
    }
    
    for( int i=2;i<=N;i++) {
    	int x =i;
    	map<int, int> M; //m[3] = how many times 3 has come in prime factorization of i
    	while(x != 1){
    		M[prime_factor[x]]++;
    		x /= prime_factor[x];
    	}
    	for(auto v:M){
    		prime_factors[i].push_back(v);
    	}
    }

    return 0;
}