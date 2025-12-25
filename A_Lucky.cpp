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
    string s;
    cin>>s;
    int sm1 = 0, sm2 = 0;
    for(int i = 0; i<3; i++){
        int dig = s[i]-'0';
        sm1+=dig;
    }
    for(int i = 3; i<6; i++){
        int dig = s[i]-'0';
        sm2+=dig;
    }
    if(sm1==sm2) cout<<"YES\n";
    else cout<<"NO\n";

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