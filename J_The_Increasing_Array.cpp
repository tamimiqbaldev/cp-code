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
    vi v(n);
    for(int i = 0; i<n; i++) cin>>v[i];
    int cn = 0;
    for(int j = 1; j<n; j++){
        if(v[j]<v[j-1]){
            int dif = v[j-1]-v[j];
            v[j] += dif;
            cn += dif;
        }
    }
    cout<<cn<<nl;
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