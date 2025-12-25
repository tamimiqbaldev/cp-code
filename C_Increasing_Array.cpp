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
   ll n;
   cin>>n;
   vi v(n);
   for(ll i = 0; i<n; i++) cin>>v[i];

   ll mv = 0;
   for(ll i = 1; i<n; i++){
    if(v[i]<v[i-1]){
        ll diff = (v[i-1]-v[i]);
        v[i] += diff;
        mv +=diff;
    }
    }
    cout<<mv<<nl;
  
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