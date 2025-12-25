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
  int a[n][m];
  for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++){
        cin>>a[i][j];
    }
  }
  for(int i = 0; i<n; i++){
    for(int j = m-1; j>=0; j--){
        cout<<a[i][j]<<" ";
    }
    cout<<nl;
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