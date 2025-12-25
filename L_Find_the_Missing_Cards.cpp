#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
#define all(x) (x).begin(), (x).end() 
#define pb push_back 
#define mp make_pair 

// Shorter vector aliases
#define vi vector<int>
#define vvi vector<vector<int>>
template<typename T> using V = vector<T>;  // More generic version

void solve() {
   //code start here
    int n;
    cin>>n;
    int m = 14;
    vector<char>s(m), h(m), cc(m), d(m);
    for(int i = 0; i<n; i++){
        int p;
        char c;
        cin>>c>>p;
        if(c=='S') s[p]++;
        else if(c=='H') h[p]++;
        else if(c=='C') cc[p]++;
        else if(c=='D') d[p]++;
    }
    for(int j = 1; j<m; j++){
        if(s[j] == 0) cout<<"S "<<j<<nl;
    }
    for(int j = 1; j<m; j++){
        if(h[j] == 0) cout<<"H "<<j<<nl;
    }
    for(int j = 1; j<m; j++){
        if(cc[j] == 0) cout<<"C "<<j<<nl;
    }
    for(int j = 1; j<m; j++){
        if(d[j] == 0) cout<<"D "<<j<<nl;
    }
}

signed main() {
    FAST_IO 
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}