//Got Time Limit Exceeded

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
// #define mp make_pair 
#define mpp map<int, int>
#define vec vector<int>
#define sett set<int>
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"



void solve() {
    int n; cin>>n;

    map<int, int> mp;

    while(n--){
        string s;
        int n;
        cin>>s>>n;
        if(s=="insert"){
            mp[n]++;
        }
        else{
            mp[n]--;
        }
        bool homo = false, htro = false;
        int cn = 0;
        for(auto it:mp){
            if(it.second>1) homo = true;
            if(it.second>0) cn++;
        }
        if(cn>1) htro = true;
        
        if(homo && htro) cout<<"both\n";
        else if(homo) cout<<"homo\n";
        else if(htro) cout<<"hetero\n";
        else cout<<"neither\n";
    }
   
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}