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
   int n, t; cin>>n>>t;
   vi v(n);
   for(int i = 0; i<n; i++) cin>>v[i];

   int lw = 1, hgh = 1e18;
    int ans = -1;
   while(lw<=hgh){
        __int128_t cn = 0;
        int md = (lw+hgh)/2;
        for(int i = 0; i<n; i++){
            cn += ((__int128_t)md/v[i]);
        }
        if(cn>=t){
            ans = md;
            hgh = md-1;
        }
        else lw = md + 1;
   }
   cout<<ans<<nl;
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}