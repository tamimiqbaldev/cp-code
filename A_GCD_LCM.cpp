#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
// #define ll long l    ong
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


// int gcd(int a, int b){
//     // if(b>a) swap(a, b);
//     while(a%b){
//         int rem = a%b;
//         a = b;
//         b = rem;
//     }
//     return b;
// }
// int lcm(int a, int b){
//     int lf = a, rg = b;
//     // if(b>a) swap(a, b);
//     while(a%b){
//         int rem = a%b;
//         a = b;
//         b = rem;
//     }
//     return (lf*rg)/b;
// }



void solve() {
    int g, l; cin>>g>>l;
    // for(int st = g, stt = l; st<=l && stt >= g; st++, stt--){
    //     if(st%g==0 && stt%g==0 && l%st==0 && l%stt == 0){
    //         cout<<st<<" "<<stt<<nl; return;
    //     }
    // }
    if((l%g)==0){
        cout<<g<<" "<<l<<nl; 
        return;
    }  
    cout<<-1<<nl;
    return;


}

signed main() {
    FAST_IO 
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}