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
    int mx = 1, maxi = INT_MIN;
    for(int i = 1; s[i]!='\0'; i++){
        if(s[i]==s[i-1]) mx++;
        else{
            maxi = max(maxi, mx);
            mx = 1;
        }
    }
    maxi = max(maxi, mx);
    cout<<maxi<<nl;
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