#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
#define flt double

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
    int x;
    cin>>x;
    for(int y = x-1; y>=1; y--){
        int xr = x^y;
        if(xr==0 || xr>x+y) continue;
        int l1 = (y+x);
        int l2 = (y+xr);
        int l3 = (x+xr);

        if((l1>xr)&&(l2>x)&&(l3>y)){
            cout<<y<<nl;
            return;
        }
    }
    cout<<-1<<nl;
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