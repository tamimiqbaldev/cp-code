#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
#define all(x) (x).begin(), (x).end() 
#define pb push_back 
#define mp make_pair 

void solve() {
    // Solution
    vector<int>v(3);
    for(int i = 0; i<3; i++){
        cin>>v[i];
    }
    sort(all(v));
    for(int i = 0; i<2; i++){
        cout<<v[i]<<" ";
    }
    cout<<v[2]<<nl;
}

signed main() {
    FAST_IO 
    int t;
    t = 1;
    // cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}