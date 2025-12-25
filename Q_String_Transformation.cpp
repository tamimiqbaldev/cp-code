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
   string s;
   cin>>s;
   int n;
   cin>>n;
   while(n--){
    string cmnd;
    int i, e;
    cin>>cmnd;
    cin>>i>>e;
    if(cmnd=="replace"){
        string ex;
        cin>>ex;
        for(int borson_sir = i, bal = 0; borson_sir<=e; borson_sir++){
            s[borson_sir] = ex[bal];
            bal++;
        }
    }
    if(cmnd=="print"){
        for(int k = i; k<=e; k++) cout<<s[k];
        cout<<nl;
    }
    if(cmnd=="reverse"){
        for(int initial = i, final = e; initial<final; initial++, final--){
            swap(s[initial], s[final]);
        }
    }
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