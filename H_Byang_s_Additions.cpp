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
   int a, b;
   cin>>a>>b;

   if(a==0 || b==0){
    cout<<"No\n";
    return;
   }

  vi va, vb;
  while(a){
    va.emplace_back(a%10);
    a/=10;
  }
  while(b){
    vb.emplace_back(b%10);
    b/=10;
  }
  for(int i=0, mn = min(va.size(), vb.size()); i<mn; i++){
    if(va[i]+vb[i]>9){
        cout<<"Yes\n";
        return;
    }
  }
  cout<<"No\n";
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