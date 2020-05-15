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


//Divide and Conquer O(N)
int maxSubArrayDC(vector<int>& nums) {
    int n = nums.size();
    vector<int> pref(n);
    for(int i=0;i<n;i++){
        pref[i] = nums[i] + (i == 0 ? 0 : pref[i-1]);
    }
    int min_so_far = 0;
    int ans = INT_MIN;
    for(int j=0;j<n;j++){
        ans = max(ans, pref[j] - min_so_far);
        min_so_far = min(min_so_far, pref[j]);
    }
    return ans;
}

//Kadane's Algorithm O(N^2)
int maxSubArrayKadane(vector<int>& nums) {
    int ans=nums[0],i,sum=0;
    int n = nums.size();
    for(i=0;i<n;i++){
        sum+=nums[i];
        ans=max(sum,ans);
        sum=max(sum,0);
    }
    return ans;
}

int main(){
    fastIO

    int n,temp;
    cin>>n;
    vi nums(n);
    for(int i=0;i<n;i++){
    	cin>>temp;
    	nums.pb(temp);
    }
    int res = maxSubArrayDC(nums);
    cout<<res<<endl;

    return 0;
}