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
    int dr, sc; cin>>dr>>sc;
    vec v(dr);
    int imn = INT_MAX;
    int cn = 0;
    for(int i = 0; i<dr; i++){
        cin>>v[i];
        if(v[i]==1){
            cn++;
            imn = min(imn, i);
        }
    }
    if(cn==0){
        yes;
        return;
    }
    if(cn>0){
        int idx = imn + sc - 1;
        if(idx >= v.size()) yes;
        else{
            bool on = false;
            for(int i = idx + 1; i<v.size(); i++){
                if(v[i]==1) on = true;
            }
            if(on){
                no;
                return;
            }
            yes;
            return;
        }
    }

}

signed main(){
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}