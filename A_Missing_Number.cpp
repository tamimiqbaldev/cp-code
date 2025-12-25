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
   vi v(n-1);
   for(int i = 0; i<n-1; i++) cin>>v[i];
   sort(all(v));
   if(v[0]!=1){
    cout<<1<<nl;
    return;
   }
   if(v[n-2]==n-1){
    cout<<n<<nl;
    return;
   }
   for(int i = 1; i<n-1; i++){
    if(v[i]-v[i-1]>1){
        cout<<v[i]-1<<nl;
        return;
    }
   }
  
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