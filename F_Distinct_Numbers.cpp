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

void Mergee(int low, int mid, int high, vec &v){
    vec l, h;
    for(int i = low; i<=mid; i++) l.push_back(v[i]);
    for(int j = mid+1; j<=high; j++) h.push_back(v[j]);

    int i = low, li = 0, hi = 0;
    while(li<l.size() && hi<h.size()){
        if(l[li]<=h[hi]){
            v[i] = l[li++];
        }else{
            v[i] = h[hi++];
        }
        i++;
    }
    while(li<l.size()) v[i++] = l[li++];
    while(hi<h.size()) v[i++] = h[hi++];
}

void MergeSort(int low, int high, vec &v){
    int mid = (low+high)/2;
    if(low<high){
        MergeSort(low, mid, v);
        MergeSort(mid+1, high, v);
        Mergee(low, mid, high, v);
    }
}

void solve(){
    int n; cin>>n;
    vec v(n);
    for(auto &x:v) cin>>x;
    MergeSort(0, n-1, v);
    int dis = 0;
    // for(auto x:v) cout<<x<<" ";
    // cout<<endl;
    for(int i = 0; i<n-1; i++){
        if(v[i]!=v[i+1]) dis++;
    }
    cout<<++dis<<endl;
}
signed main(){
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}