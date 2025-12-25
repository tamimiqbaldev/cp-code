#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
#define pb push_back
#define mp make_pair

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());

    int tm = 0;
    int plyr = 0;
    for (int i = 0; i < n; ++i) {
        plyr++;
        if (v[i] * plyr >= x) {
            tm++;
            plyr = 0;
        }
    }
    cout << tm << nl;
}

signed main() {
    FAST_IO
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}