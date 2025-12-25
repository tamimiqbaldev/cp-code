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
#define seti set<int>
#define que queue<int>
#define dque deque<int>
#define vec vector<int>
#define prque priority_queue<int>  
#define aprque priority_queue<int, vector<int>, greater<int>>  
#define vvec vector<vector<int>>
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define octroi 1e9+7
#define spc " "
// vec dp(1e8, -1);//1e8 is the maxmm vector size for integer datatype.

void solve(){
    int a, b; cin>>a>>b;
    if(a==b) yes;
    // if(a==0 && b==0) yes;
    else if(a>0 && b==0) yes;//odd
    else if(a>0 && b>0 && ((b%a==0)||(a+1==b))) yes;//even b>a && a==0 -->impossible
    else no; 

}
signed main(){
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
        
        return 0;
    }