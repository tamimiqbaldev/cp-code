#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define flt double
#define yes cout<<"Yes\n"
#define no cout<<"No\n"

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vi vector<int>
// int n;
// vi v(10^9);//using pointer instead of Global Variable is better-Borson Sir 


void solve() {
   //Code:
    int n; cin>>n;
    string s, t; cin>>s>>t;
    int cn = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='0' && t[i]=='1'){
            no;
            return;
        }
        else if(s[i]=='1' && t[i]=='0'){
            cn++;
        }
    }
    if((cn&1)==0) yes;
    else no;
}

int main() {
    FAST_IO
    int t; cin>>t; while(t--)
    solve();
    return 0;
}