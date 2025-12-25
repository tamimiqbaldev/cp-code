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
    int n, op; cin>>n>>op;

    vi v; for(int i = 0; i<n; i++) cin>>v[i];

    sort(all(v));

    int lw = 0, hgh = n-1;

    while(lw<=hgh){
        int md = (lw+hgh)/2;
        int ans = v[md];
        //i dunno what to do, just followed my instinct as just learned binary search, talk about it as well ChatGPT.
    }
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}