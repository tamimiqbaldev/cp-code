#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define llv vector<ll>
#define all(x) (x).begin(), (x).end()
#define spc " "

ll solve() {
    ll n;
    cin >> n;
    llv arr(n), b(n);
    map<ll,ll> mp;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        b[i] = arr[i];
    }

    llv sortedAsc = arr;
    sort(all(sortedAsc));
    for(int i = 0; i < n; i++) {
        mp[sortedAsc[i]] = i;
    }
    ll ascSwaps = 0;
    for(int i = 0; i < n; i++) {
        if(b[i] != sortedAsc[i]) {
            swap(b[i], b[mp[b[i]]]);
            ascSwaps++;
            i--; 
        }
    }
    llv sortedDesc = arr;
    sort(all(sortedDesc), greater<ll>());
    for(int i = 0; i < n; i++) {
        mp[sortedDesc[i]] = i;
    }
    ll descSwaps = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != sortedDesc[i]) {
            swap(arr[i], arr[mp[arr[i]]]);
            descSwaps++;
            i--;
        }
    }

    cout << min(ascSwaps, descSwaps) << nl;
    return 0;
}
signed main() {
    FAST_IO
    solve();
    return 0;
}