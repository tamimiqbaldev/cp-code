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
    while(1){
        int a, b;
        char op;
        cin>>a>>op>>b;
        if(op=='?') break;
        else if(op=='+') cout<<a+b<<nl;
        else if(op=='-') cout<<a-b<<nl;
        else if(op=='*') cout<<a*b<<nl;
        else if(op=='/') cout<<a/b<<nl;
    }
    
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