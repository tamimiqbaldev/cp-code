#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define ull unsigned long long
#define flt long double
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sum(x) accumulate(all(x), 0LL)
#define mpi map<int, int>
#define mps map<string, int>
#define seti set<int>
#define que queue<int>
#define dque deque<int>
#define vec vector<int>
#define prque priority_queue<int>  
#define aprque priority_queue<int, vector<int>, greater<int>>  
#define vvec vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define spc " "
#define fro(i,a,b) for(int i=(a);i<(b);++i)
#define rfro(i,a,b) for(int i=(a);i>=(b);--i)
#define each(x,a) for(auto &x : a)
#define sz(x) (int)(x).size()
#define gcd __gcd
#define lcm(a,b) ((a)/gcd(a,b)*(b))
#define mod 1000000007
#define modn(x) (((x)%mod+mod)%mod)
const int MAXN = 1e7; // Safe default
vector<int> dp(MAXN, -1); 
vec v(MAXN, 0);
const int sept = 1e9;
vec prime;
void Sieve(){
    v[0] = 1;
    fro(i, 2, sept){
        for(int j = i+i, j<sept, j+=i){
            v[j] = 1;
        }
        if(v[i]==0) v.push_back(i);
    }
}

ll fact(int n){
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = n*fact(n-1);
}


void solve(){

}
signed main(){
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}