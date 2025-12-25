#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll x, y, z;
    cin>>x>>y>>z;

    ll mx = (ll) (x+y)/z;
    ll r1 = x%z;
    ll r2 = y%z;

    ll rm = r1 + r2;

    if(rm >= z) cout<<mx<<" "<<min(z-r1, z - r2);
    else cout<<mx<<" "<<0<<endl;
}