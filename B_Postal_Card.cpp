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
#define mp make_pair 
#define mpp map<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"



void solve() {
   int s, t; cin>>s>>t;
   vector<string>ss ;
   for(int i = 0; i<s; i++){
    string str; cin>>str;
    string subb = str.substr(3, 3);
    ss.push_back(subb);
   }

   set<string>stt;
   for(int j = 0; j<t; j++){
       string strr; cin>>strr;
       stt.insert(strr);
    }
    
    int cn = 0;
   for(int i = 0; i<s; i++){
        if(stt.find(ss[i])!=stt.end()) cn++;
   }
   cout<<cn<<nl;
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}