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
    string s;
    cin>>s;
    int cnt = 0, one = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='1') one++; 
    }
    for(int i = 0; i<n; i++){
        if(s[i]=='1') cnt += (one-1); 
        else cnt += (one+1);
    }
    cout << cnt<<nl;
  
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