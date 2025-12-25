#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
#define flt double

#define all(x) (x).begin(), (x).end()
#define eb emplace_back
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
   int n;
   cin>>n;
   int a[n][n];
   vi v(2*n);
   for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
        cin>>a[i][j];
        if((i+j+2)<=2*n){
            v[i+j-2] = a[i][j];
        }
    }
   }
   for(int i = 0; i<2*n; i++){
    cout<<v[i]<<" ";
   }
   cout<<nl;
  
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