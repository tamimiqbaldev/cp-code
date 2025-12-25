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

void digit(int n)
{
    if(n<=0) return;

    digit(n/10);

    cout<<n%10<<" ";
}

void solve() {
   //Code:
   int n;
   cin>>n;
   if(n==0){
    cout<<0<<nl;
    return;
   }
    digit(n);
    cout<<nl;
}

int main() {
    FAST_IO
    int t; cin>>t; while(t--)
    solve();
    return 0;
}