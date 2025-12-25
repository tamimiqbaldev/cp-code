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
   string s;
   cin>>s;

   int sz = s.size();
   for(int i = 0, szz = sz-3; i<=szz; i++){
        if(s.substr(i, 3)=="010" || s.substr(i, 3)=="101"){
            cout<<"Good\n";
            return;
        }
   }
   cout<<"Bad\n";
  
}

int main() {
    FAST_IO
    int t;
    // t = 1; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}