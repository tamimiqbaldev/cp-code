#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define ull unsigned long long
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
#define octroi 1e9+7


void solve(){
    string s1, s2;
    cin>>s1>>s2;
    string s = s1+s2;
    vec v;
    int sz = s.size();
    for(int i = 0; i<sz; i++){
        v.push_back(s[i]-'0');
    }
    for(int i = 0; i<sz-1; i++){
        for(int j = 0; j<sz-1-i; j++){
            if(v[j]<v[j+1]) swap(v[j], v[j+1]);
        }
    }   
    for(auto &val : v) cout<<val;
    cout<<endl;
}
signed main(){
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}