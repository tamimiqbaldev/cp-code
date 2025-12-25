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
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool x = true;
    int mx = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='1'){
            x = false;
            int vacant = max(n-i, i+1);
            if(mx<vacant){
                mx = vacant;
            }
        }
    }
    if(x) cout<<n<<nl;
    else{
        cout<<2*mx<<nl;
    }
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