#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair

#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>
template<typename T> using v = vector<T>;  

#define forn(i, n) for(int i = 0; i < int(n); i++)
//for(int i = 0; i<n; i++)
// for(int i = 0; s[i]!='\0'; i++)


void solve() {
   //Code:
   string p, h;
   cin>>p>>h;

   vi pp(26), hh(26);
    for(int i = 0; i<p.size(); i++){
        pp.emplace_back(p[i]-'a');
    }
    for(int i = 0; i<h.size(); i++){
        hh.emplace_back(hh[i]-'a');
    }

}

signed main() {
    FAST_IO
    int t;
    // t = 1; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}