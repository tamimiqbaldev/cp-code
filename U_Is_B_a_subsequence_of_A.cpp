#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define flt double

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vi vector<int>
//for(int i = 0; i<n; i++)
// for(int i = 0; s[i]!='\0'; i++)


void solve() {
   //Code:
   int n, m;
   cin>>n>>m;
   vi v(n), sub(m);
   for(int i = 0; i<n; i++) cin>>v[i];
   for(int i = 0; i<m; i++) cin>>sub[i];

   int sb = 0; 
   for(int k = 0; k<n; k++){
        if(sub[sb]==v[k]){
            sb++;
        }
   }
   if(sb>=m){
    cout<<"YES\n";
   }
   else cout<<"NO\n";
}

int main() {
    FAST_IO
    int t;
    t = 1; 
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}