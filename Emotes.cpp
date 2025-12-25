#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, m, k;
    cin>>n>>m>>k;
    ll a[n];
    for(ll i = 0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    ll j = 1; 
    ll cycle = m/(k+1);
    ll rem = m%(k+1);
    
    cout<<cycle*(k*a[n-1] + a[n-2]) + rem*a[n-1]<<endl;
}