#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
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
#define octroi 1e9+7


void solve(){
    int sz, qr; cin>>sz>>qr;
    vec v(sz);
    for(auto &val : v) cin>>val;
    sort(all(v));

    while(qr--){
        int x; cin>>x;
        int l = 0, r= sz-1; 
        bool payci = false;
        while(l<=r){
            int mid = (l+r)/2;
            if(x==v[mid]){
                payci = true;
                cout<<"0\n";
                break;
            }
            if(x<v[mid]){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        if(payci==false){
            auto idx = upper_bound(v.begin(), v.end(), x);
            if(x > 0){
                if(sz - (idx - v.begin())&1) cout<<"NEGATIVE\n";
                else cout<<"POSITIVE\n";
            }
            else{
                if((idx - v.begin())&1) cout<<"NEGATIVE\n";
                else cout<<"POSITIVE\n";
            }
        }
    }
}

signed main(){
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}