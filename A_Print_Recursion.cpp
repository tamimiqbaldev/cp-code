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

void Love(int n){
    if(n<=0) return;
    cout<<"I love Recursion\n";
    return Love(n-1);
}

void solve() {
   //Code:
   int n; cin>>n;
   Love(n);

}

int main() {
    FAST_IO
    // int t; cin>>t; while(t--)
    solve();
    return 0;
}