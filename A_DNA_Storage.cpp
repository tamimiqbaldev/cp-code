#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
// #define int long long
#define ll long long
#define ul unsigned long long
#define flt long double
#define psbk push_back
#define psfr push_front
#define ppbk pop_back
#define ppfr pop_front
#define all(x) (x).begin(), (x).end() 
#define rall(x) (x).rbegin(), (x).rend() 
#define mkpr make_pair 
#define mpi map<int, int>
#define mps map<string, int>
#define sett set<int>
#define que queue<int>
#define dque deque<int>
#define vec vector<int>
#define prque priority_queue<int>  
#define aprque priority_queue<int, vector<int>, greater<int>>  
#define vvec vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"



void solve(){
    int n; cin>>n;
    string s;
    cin>>s;
    string sn = "";
    for(int i = 0; i<n; i+=2){
        string sb = s.substr(i, 2);
        if(sb == "00") sn+="A";
        else if(sb=="01") sn+="T";
        else if(sb=="10") sn+="C";
        else if(sb=="11") sn+="G";
    }
    cout<<sn<<nl;
}

signed main(){
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}