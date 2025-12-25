#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define flt double
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vi vector<int>
// int n;
// vi v(10^9);//using pointer instead of Global Variable is better-Borson Sir 


void solve() {
   //Code:
    int n; cin>>n;
    if(n==1){
        cout<<-1<<nl; return;
    }
    if((n&1)==0){
        int split = n/2;
        for(int i = 0; i<split; i++) cout<<3<<" "<<-3<<" ";
        cout<<nl;
    }
    else{
        int rm = (n-3);
        if(rm == 0){
            cout<<1<<" "<<2<<" "<<-3<<nl;
            return;
        }
        
        cout<<1<<" "<<2<<" "<<-3<<" ";
        int split = rm/2;
        
        for(int i = 0; i<split; i++) cout<<3<<" "<<-3<<" ";
        cout<<nl;
    }
}

int main() {
    FAST_IO
    int t; cin>>t; while(t--)
    solve();
    return 0;
}