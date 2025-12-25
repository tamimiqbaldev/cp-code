#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
void solve() {
    int n, k, sm = 0;
    cin>>n>>k;
    vector<int>v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
        sm+=v[i];
    }
    int cnt = 0; 
    for(int i = 0; i<n; i++){
        int sum = sm - v[i];
        if((v[i]+k)>sum) cnt++;
    }
    cout<<cnt<<nl;
}
    
signed main(){
    FAST_IO
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}
