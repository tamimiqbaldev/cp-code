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
    int n; cin>>n;
    int on = 0, to = 0;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        if(x==1) on++;
        else to++;
    }
    if(to == 0 || on == 0){
        cout<<0<<endl;
        return;
    }
    if(on & 1){
        cout<<to<<endl;
    }else{
        int oprtn = on/2;
        cout<<min(oprtn,to)<<endl;
    }

}
signed main(){
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}