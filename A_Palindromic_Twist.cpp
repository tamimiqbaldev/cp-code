#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
#define all(x) (x).begin(), (x).end() 
#define pb push_back 
#define mp make_pair 

// Shorter vector aliases
#define vi vector<int>
#define vvi vector<vector<int>>
template<typename T> using V = vector<T>;  // More generic version

void solve() {
   //code start here
   int n;
   string s;
   cin>>n>>s;

   for(int i = 0, nn = n/2; i<nn; i++){
        if((s[i]==s[n-1-i]) || abs(s[i]-s[n-1-i])==2) continue;
        else{
            cout<<"NO\n";
            return;
        }
    }
   cout<<"YES\n";
}

signed main() {
    FAST_IO 
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}