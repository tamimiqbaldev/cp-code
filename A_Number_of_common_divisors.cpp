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

vec divisors(int n){
    vec v; 
    for(int i = 1; i*i<=n; i++){
        if((n%i)==0){
            v.push_back(i);
            if(n/i != i) v.push_back(n/i);
        }
    }
    sort(all(v));
    return v;
}

void solve(){
    int a, b; cin>>a>>b;
    vec x = divisors(a);
    vec y = divisors(b);
    int cn = 0; 
    int i = 0, j = 0; 
    // while(i<x.size() && j<y.size()){
    //     if(x[i]==y[j]){
    //         cn++;
    //         i++; j++;
    //     }else if(x[i]>y[j]) j++;
    //     else i++;
    // }
    unordered_set<int>s{all(x)};
    int sz = y.size();
    for(int i = 0; i<sz; i++){
        if(s.count(y[i])) cn++;
    }
    cout<<cn<<endl;
}
signed main(){
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}