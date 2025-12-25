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
    int w, h, x, y, r;
    cin>>w>>h>>x>>y>>r;
    if((x>=r && x<=w-r) && (y>=r && y<=h-r)) cout<<"Yes\n";
    else cout<<"No\n";
}

signed main() {
    FAST_IO 
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}