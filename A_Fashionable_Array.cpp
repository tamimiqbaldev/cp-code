#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int even = 0, odd = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Remove the smaller parity group to make all same parity
    cout << min(even, odd) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
