#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
// #define int long long
#define ll long long
#define flt long double
#define pb push_back
#define pf push_front
#define all(x) (x).begin(), (x).end() 
#define rall(x) (x).rbegin(), (x).rend() 
// #define mp make_pair 
#define mpp map<int, int>
#define vec vector<int>
#define sett set<int>
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"



void solve() {
    int n; cin>>n;
    vec v(n+10);
    for(int i = 1; i<=n; i++) cin>>v[i];

    vec mxx(n+10);
    vector<ll>psm(n+10);

    psm[1] = v[1];
    mxx[1] = v[1];
    for(int i = 2; i<=n; i++){
        mxx[i] = max(v[i], mxx[i-1]);

        psm[i] = psm[i-1] + v[i];
    }
    for(int k = 1; k<=n; k++){
        cout<<psm[n]-psm[n-k+1]+mxx[n-k+1]<<" ";
    }
    cout<<nl;
    
    
}

signed main() {
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}