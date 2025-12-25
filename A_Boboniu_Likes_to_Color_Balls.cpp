#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
// #define int long long
#define flt long double
#define pb push_back
#define pf push_front
#define all(x) (x).begin(), (x).end() 
#define mp make_pair 
#define mpp map<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define yes cout<<"Yes\n"
#define no cout<<"No\n"

void solve() {
   set<int>s;
   for(int i = 0; i<4;i++){
    int n;
    cin>>n;
    s.insert(n);
   }

   int sz = s.size();
   if(sz==1 || sz == 4) yes;
   else no;
}

signed main() {
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}