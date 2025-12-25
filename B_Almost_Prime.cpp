#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
// #define int long long
#define ll long long
#define flt long double
#define pb push_back
#define pf push_front
#define all(x) (x).begin(), (x).end() 
#define mp make_pair 
#define mpp map<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

bool PrimeCheck(int n){
    if(n<2) return false;//worked on prime fixation including for value 2.
    for(int i = 2; i*i<=n; i++){
	if(n%i==0) return false;
    }
    return true;
}

void solve() {
    int n; cin>>n;
    int ans = 0;
    for(int j = 1; j<=n; j++){
        int cn = 0;
        for(int i = 1; i*i<=j; i++){//n&j mixture--.mistake.
            if(j%i==0){
                if(PrimeCheck(i)) cn++;
                if((j/i)!=i && PrimeCheck(j/i)==true) cn++;
            }
        }
        if(cn==2) ans++;
    }   
    cout<<ans<<nl;
}

signed main() {
    FAST_IO 
    // int t; cin>>t; while(t--)
        solve();
   
    return 0;
}