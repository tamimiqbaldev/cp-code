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
   string all, ltr;
   cin>>all>>ltr;
   int sz = ltr.size();
   int szz = all.size();
    map<char, int>mp;
    for(int i = 0; all[i]!= '\0'; i++){
        mp[all[i]] = i;
    }
    int mv = 0;
    for(int i = 1; ltr[i]!='\0'; i++){
        mv+=abs(mp[ltr[i-1]]-mp[ltr[i]]);
    }
    cout<<mv<<nl;
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