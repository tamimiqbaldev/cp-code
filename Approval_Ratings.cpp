#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
// #define int long long
#define ll long long
#define flt long double
#define pb push_back
#define pf push_front
#define all(x) (x).begin(), (x).end() 
#define rall(x) (x).rbegin(), (x).rend() 
#define mp make_pair 
#define mpp map<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>

void solve() {
    int sm = 0; 
    vi v(5);
    for(int i = 0; i<5; i++){
        cin>>v[i];
        sm+=v[i];
    }
    if(sm>=35){
        cout<<0<<nl;
        return;
    }
    //to work on it if less than 35
    sort(all(v));
    int t = 0;
    for(int j = 0; j<5; j++){
        if(sm<35){
            sm = sm-v[j]+10;
            t++;
        }
        else if(sm>=35) break;
    }
    cout<<t*100<<nl;

}
signed main() {
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}