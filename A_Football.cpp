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
    int cn = 1;
    for(int i = 1, sz = s.size(); i<sz; i++){
        if(s[i]==s[i-1]) cn++;
        else cn = 1;
        if(cn==7){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

signed main() {
    FAST_IO 
    int t;
    t = 1;
    // cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}