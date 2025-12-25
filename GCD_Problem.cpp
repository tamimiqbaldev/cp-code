#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define flt long double
#define pb push_back
#define pf push_front
#define all(x) (x).begin(), (x).end() 
#define mp make_pair 
#define mpp map<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define lcm(a,b) ((a)/gcd(a,b)*(b))

int gcd(int a, int b){
    if(b>a) swap(a, b);
    while(b){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}


void solve() {
    int n; cin>>n;
    
    int c = 1;

    for(int a = 1; a<n-1; a++){
        int b = (n-1-a);
        if(b>0 && b!=a && c!=a && b!=c && gcd(a, b)==1){
            cout<<a<<" "<<b<<" "<<c<<nl;
            return;
        }
    }
    int a, b; cin>>a>>b;
    cout<<"LCM IS: "<<lcm(a, b)<<endl;

}

signed main() {
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}


