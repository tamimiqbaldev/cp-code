#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
#define flt long double
#define pb push_back
#define pf push_front
#define all(x) (x).begin(), (x).end() 
#define mp make_pair 
#define mpp map<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>

void solve() {
    int n, ln; cin>>n>>ln;
    vi v(n);
    for(int i = 0; i<n; i++) cin>>v[i];

    int mn = LLONG_MAX, idx;
    for(int i = 0; i <=(n-ln); i++){
        int sm = 0;
        for(int j = i; j<(i+ln); j++){
            sm+=v[j];
        }
        // mn = min(sm, mn);
        if(sm<mn){
            mn = sm;
            idx = i;
        }
    }
    cout<<idx+1<<nl;
}
signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}