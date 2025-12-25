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

void solve() {
   //Code:
   int a, b, c;
   cin>>a>>b>>c;
   for(int i = 1; i<=a; i++) cout<<i;
   for(int i = 0; i<b; i++){
    char x = 'A'+i;
    cout<<x;
   }
   for(int i = 0; i<c; i++){
    char x = 'a'+i;
    cout<<x;
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