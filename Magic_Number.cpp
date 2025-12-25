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
#define yes cout<<"YES.\n"
#define no cout<<"NO.\n"
#define octroi sqrt(6.5*1e8)
vector<bool>vc(octroi+1);

void Sieve(){
    vc[1] = vc[0] = 1;
    // vector<int>vk;

    for(int i = 2; i<=octroi; i++){
        if(vc[i]) continue;
        for(int j = i+i; j<=octroi; j+=i){
            vc[j] = 1;
        }
    }
}

void solve(){
    int n; cin>>n;
    int rt = sqrt(n);
    if(rt*rt!=n || vc[rt]){
        no;
    }else{
        yes;
    }
}
signed main(){
    FAST_IO 
    Sieve();
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}