#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
#define flt double

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair

#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>
template<typename T> using v = vector<T>;  

#define forn(i, n) for(int i = 0; i < int(n); i++)
//for(int i = 0; i<n; i++)
// for(int i = 0; s[i]!='\0'; i++)


void solve() {
   //Code:
   string s, ns;
   cin>>s;
   s[0]-= 32;
   ns+=s[0];
   for(int i = 1; s[i]!= '\0'; i++){
        if(s[i] == 's') ns += '$';
        else if(s[i] == 'i') ns += '!';
        else if(s[i] == 'o') ns += "()";
        else ns+=s[i];
   }
   cout<<ns<<"."<<nl;
}

signed main() {
    FAST_IO
    int t;
    t = 1; 
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}