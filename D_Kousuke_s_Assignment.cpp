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
    int n;
    cin>>n;
    vi v(n);

    for(int i= 0 ;i<n; i++) cin>>v[i];
    vi pfx;

    int cn = (v[0]==0) ? 1 : 0;

    pfx[0] = v[0];

    for(int i = 1; i<n; i++){
        pfx[i] = v[i] + pfx[i-1];
        if(pfx[i]==0){
            ++cn;

            pfx[++i] = v[i];

        }
        cout<<cn<<nl;
    }


}

signed main() {
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}