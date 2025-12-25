#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
#define flt long double
#define pb push_back
#define pf push_front
#define all(x) (x).begin(), (x).end() 
#define mp make_pair 
#define mpp map<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>

int gcd(int a, int b){
    // if(b>a) swap(a, b);
    while(b){//b=r-->r=a%b
        int r = a%b;
        a = b;
        b = r;
    }
    return a;

}

void solve() {
    // int n; cin>>n;
    
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}