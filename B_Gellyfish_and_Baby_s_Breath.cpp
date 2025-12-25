#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define ul unsigned long long
#define flt long double
#define psbk push_back
#define psfr push_front
#define ppbk pop_back
#define ppfr pop_front
#define all(x) (x).begin(), (x).end() 
#define rall(x) (x).rbegin(), (x).rend() 
#define mkpr make_pair 
#define mpi map<int, int>
#define mps map<string, int>
#define sett set<int>
#define que queue<int>
#define dque deque<int>
#define vec vector<ll>
#define prque priority_queue<int>  
#define aprque priority_queue<int, vector<int>, greater<int>>  
#define vvec vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define modu 998244353
 


void solve(){
    int n; cin>>n;
    vec p(n), q(n), r(n);
    for(ll &x: p) cin>>x;
    for(ll &x: q) cin>>x;

    for(int i = 0; i<n; i++){
        ll mx = LLONG_MIN;
        for(int j = 0; j<=i; j++){
            ll val = (1<<p[j])%modu + (1<<q[i-j])%modu;
            ll valu = (val)%modu;
            mx = max(mx, valu);
        }
        r[i] = mx;
    }
    for(auto &vl:r) cout<<vl<<" ";
    cout<<endl;
}

signed main(){
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}