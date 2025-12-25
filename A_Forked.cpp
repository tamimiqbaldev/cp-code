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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define octroi 1e9+7

void solve(){
    int a, b, qa, qb, ka, kb;
    cin>>a>>b>>ka>>kb>>qa>>qb;
    int df1 = abs(qa-ka);
    int df2 = abs(qb-kb);
    if(df1==df2 && (a+b)==df1){
        if(a==b) cout<<1<<nl;
        else cout<<2<<nl;//a!=b
    }else if(((a+b)==df1 && df2==0) || ((a+b)==df2 && df1==0)){
        cout<<2<<endl;//symmetric-wise 2 answers
    }else{
        cout<<0<<endl;
    }
}
signed main(){
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}