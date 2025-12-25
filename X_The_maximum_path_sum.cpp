#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vi vector<int>
#define nl '\n'
#define ll long long
#define flt double
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int v[11][11];
int n, m;

ll maxsm(int rw, int cl){
    if(rw == n && cl == m) return v[rw][cl];

    ll ans = LONG_LONG_MIN;

    if(rw+1<=n) ans = max(ans, maxsm(rw+1, cl)+v[rw][cl]);
    if(cl+1<=m) ans = max(ans, maxsm(rw, cl+1)+v[rw][cl]);

    return ans;
}

void solve(){
    cin>>n>>m;
    
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++) cin>>v[i][j];
    }

    cout<<maxsm(1, 1)<<nl;
}

int main() {
    FAST_IO
    // int t; cin>>t; while(t--)
    solve();
    return 0;
}