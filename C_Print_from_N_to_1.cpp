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

void print(int n){
    if(n==0){
        return;
    }
    cout<<n;
    if(n!=1) cout<<" ";
    print(n-1);
}

void solve() {
   //Code:
    int n;
    cin>>n;
    print(n);
}

int main() {
    FAST_IO
    // int t; cin>>t; while(t--)
    solve();
    cout<<nl;
    return 0;
}