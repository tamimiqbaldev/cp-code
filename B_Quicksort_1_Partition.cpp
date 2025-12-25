#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define vec vector<ll>
#define fro(i,a,b) for(int i=(a);i<(b);++i)
void solve(){
    int n; cin>>n;
    vec v(n);
    fro(i, 0, n) cin>>v[i];
    int pvt = v[0];
    vec l, r, md;
    for(auto &val : v){
        if(val == pvt) md.push_back(val);
        else if(val < pvt) l.push_back(val);
        else r.push_back(val);
    }
    fro(i, 0, l.size()) cout << l[i] << " ";
    fro(i, 0, md.size()) cout << md[i] << " ";
    fro(i, 0, r.size()) cout << r[i] << " ";
    cout << nl;
}
signed main(){
    FAST_IO
    solve();
    return 0;
}