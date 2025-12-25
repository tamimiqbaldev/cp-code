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
// for(int i = 0; i<n; i++)
// for(int i = 0; s[i]!='\0'; i++)


void solve() {
   //Code:
   int n, k, x;
   cin>>n>>k>>x;
   vi v(n);
   
    int ml = n*k;
    vi wife(ml);
   for(int i = 0; i<n; i++){
    cin>>v[i];
    wife[i] = v[i];
   }
   for(int i = n; i<(ml); i++){
        wife[i] = v[i-n];
   }

    //pfx sm
    vi pfx(ml);
    pfx[0] = wife[0];
    for(int i = 1; i<n; i++){
        pfx[i] = pfx[i-1] + wife[i];
    }
    
    int cn = 0;

    for(int i = 0, l = 0; i<ml; i++){
        if((pfx[i]-l)>=x){
            cn++;
            l = pfx[i];
        }
    }
    cout<<cn<<nl;

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