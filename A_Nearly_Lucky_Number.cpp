#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
// #define int long long
#define flt long double
#define pb push_back
#define pf push_front
#define all(x) (x).begin(), (x).end() 
#define mp make_pair 
#define mpp map<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

bool lucky(string s){
    int sz = s.size();
    for(int i = 0; i<sz; i++){
        if((s[i]!='4') && (s[i]!='7')){
           return false;
        }
    }
    return true;

}

void solve() {
    string s; cin>>s;
   int cn = 0;
   for(int i = 0, sz= s.size(); i<sz; i++){
    if(s[i]=='4'|| s[i]=='7') cn++;
   }
   if(lucky(to_string(cn))) yes;
   else no;
    
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}