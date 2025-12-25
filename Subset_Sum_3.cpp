#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define yes cout << "Yes\n"
#define no cout << "No\n"

int n, a[105];
bool found = false;

void subsequence(int index, long long sum) {
    if (found) return; 
    if (index > n) {
        if (sum%3 == 0 && sum != 0) found = true;
        return;
    }

    
    subsequence(index+1, sum);

    subsequence(index+1, sum+a[index]);
}

void solve() {
    cin >> n;
    for (int i = 1; i<=n; i++) cin>>a[i];
    found = false;
    subsequence(1, 0);
    if (found) yes;
    else no;
}

int main() {
    FAST_IO
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
