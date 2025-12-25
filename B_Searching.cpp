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
   int n;
   cin>>n;
   vi v(n);
   for(int i = 0; i<n; i++) cin>>v[i];
   int x; 
   cin>>x;
   for(int i = 0; i<n; i++){
    if(x==v[i]){
        cout<<i<<nl;
        return;
    }
   }
   cout<<-1<<nl;
  
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