#include <bits/stdc++.h>
using namespace std;
// #define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define ul unsigned long long
#define flt long double
#define psbk push_back
#define psfr push_front
#define ppbk pop_backx
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
#define octroi 1e9+7


void solve(){
    string s;
    cin>>s;
    int on = 0, of = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i]=='0') of++;
        else on++;
    }
    int sz = s.size();
    int t = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i]=='1' && of>0){
            --of; ++t;
        }else if(s[i]=='0' && on>0){
            --on; ++t;
        }else break;
    }
    cout<<(sz-t)<<endl;
}

signed main(){
    // FAST_IO 
    int t; cin>>t; while(t--)
        solve();
    return 0;
}