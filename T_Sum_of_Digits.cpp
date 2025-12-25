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

void solve() {
   //Code:
   while(1){
       string s;
       cin>>s;
    //    if(s.size()==1){
    //     int z = s[0];
    //     if(z == 0) return;
    //    }
    if(s == "0") return;
       int sm = 0;
        for(int i = 0; s[i]!='\0'; i++){
            sm += (s[i] - '0');
        }
        cout<<sm<<nl;
    }
       
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