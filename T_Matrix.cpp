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
   int ar[n][n];

   int psm = 0, tsm = 0; 
   for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
        cin>>ar[i][j];
        if(i==j) psm += ar[i][j];
        if(i+j==n-1) tsm += ar[i][j];
    }
   }
   cout<<abs(psm-tsm)<<nl;
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