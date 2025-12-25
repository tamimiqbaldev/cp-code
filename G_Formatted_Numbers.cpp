#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define flt double

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vi vector<int>
//for(int i = 0; i<n; i++)
// for(int i = 0; s[i]!='\0'; i++)


void solve() {
    //Code:
    ll n;
    cin>>n;
    if(n==0){
        cout<<0<<nl;
        return;
    }
    ll xn = n;
    vi v;
    while(n){
     v.emplace_back(n%10);
     n/=10;
    }
    if(v.size() == 3){
        cout<<xn<<nl;
        return;
    }
    string s;
    int cn = 0;
    for(int i = 0; i<v.size(); i++){
        s+=(v[i]+'0');
        cn++;
        if(cn==3 && i!=v.size()-1){
            s+=',';
            cn = 0;
        }
    }
    for(int i = (s.size()-1); i>=0; i--) cout<<s[i];
   
 }

int main() {
    FAST_IO
    int t;
    t = 1; 
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}