#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

void solve() {
    //My solution logic here
    int n;
    cin>>n;
    vector<int>a(n), b(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    for(int i = 0; i<n; i++) cin>>b[i];
    int cnt = 0;
    for(int i = 0; i<n; i++){
        if(a[i]==b[i]) cnt++;
    }
    cout<<cnt<<nl;
    
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}
