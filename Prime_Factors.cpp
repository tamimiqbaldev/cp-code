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
#define spc " "

vector<pair<int,int>> primewithcount(int n)
{
    vector<pair<int,int>>p;
    for(int i=2;i<=sqrt(n);i++)
    {
         if(n%i==0)
         {
             int cnt=0;
             while(n%i==0)
             {
                 n/=i;
                 cnt++;
             }
             p.push_back({i,cnt});
         }
    }
    if(n!=1)
    {
        p.push_back({n,1});
    }
    return p;
}

void solve(){
    int n; cin>>n;
    vector<pair<int, int>> v = primewithcount(n);
    cout<<n<<" = ";
    for(int i = 0; i<v.size(); i++){
        cout<<v[i].first<<" ^ "<<v[i].second;
        if(i+1!=v.size()){
            cout<<" * ";
        }
    }
    cout<<nl;
}
signed main(){
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}