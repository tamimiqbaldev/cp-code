#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
#define all(x) (x).begin(), (x).end()
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
   int n, k;
   cin>>n>>k;
   vi v(n);
   for(int i = 0; i<n; i++) cin>>v[i];
   int min = LLONG_MAX;
   bool peyeci = false;
   for(int i = 0, j = 1; i<n-1 && j<n; i++, j++){
        if(v[i]^v[j]>=k){
            int len = (j-i)+1;
            if(len<min) min = len;
            i = j+1;
            j += 2;
            peyeci = true;
        }
   }
   if(!peyeci){
    cout<<-1<<nl;
    return;
   }
   cout<<min<<nl;
}

signed main() {
    FAST_IO
    int t;
    // t = 1; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}