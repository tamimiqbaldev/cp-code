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
   int h1, h2, m1, m2;
   char c;
   cin>>h1>>c>>m1>>h2>>c>>m2;
//    int dh = abs(h1-h2);
//    int dm = abs(m1-m2);
    int dmm = ((abs(h1-h2)*60) + (abs(m1-m2)))/2;
    int hh = dmm/60;
    int mm = dmm%60;
    
    int fm = mm+m1;
    if(fm >= 60){
        hh++;
        fm -= 60;
    }
    cout << setw(2) << setfill('0') << h1+hh <<":"<< setw(2)<<setfill('0')<<fm<<nl;

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