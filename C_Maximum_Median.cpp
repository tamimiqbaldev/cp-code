#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
#define vi vector<int>

signed main() {
    FAST_IO

    int n, k; cin >> n >> k;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end()); // Median becomes a[n/2]

    int l = a[n / 2], r = 1e18;

    while (l < r) {
        int mid = (l + r + 1) / 2;
        int need = 0;

        // Raise all elements in the right half to at least `mid`
        for (int i = n / 2; i < n; i++) {
            if (a[i] < mid) need += (mid - a[i]);
        }

        if (need <= k) {
            l = mid; // we can go higher
        } else {
            r = mid - 1; // too costly
        }
    }

    cout << l << nl;
    return 0;
}
