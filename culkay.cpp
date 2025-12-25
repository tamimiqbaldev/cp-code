#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
void solve() {
    //My solution logic here
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    int hgh = 0, low = 0;
    for(int i = 0; i<n-1; i++){
        if(a[i+1]>a[i]) hgh++;
        else if(a[i+1]<a[i]) low++;
    }
    cout<<hgh<<" "<<low<<nl;
}

signed main(){
    int t;
    //t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}
