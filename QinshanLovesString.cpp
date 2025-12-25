#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
// #define for(a, b) for(int i = a; i<b; i++)
void solve() {
    //My solution logic here
    int n, m;
    cin>>n>>m;
    string s, t;
    cin>>s>>t;
    //s-> validity
    bool x = true;
    bool oo = false;
    bool one = false;
    for(int i = 0; i<n; i++){
        if(s[i]==s[i+1]){
            x = false;
            if(s[i]=='0') oo = true;
            else one = true;
        }
    }
    if(x){
        cout<<"YES\n";
    }   
    else{
        for(int i = 0; i<m; i++){
            if(t[i]==t[i+1]){
                cout<<"NO\n";
                return;
            }
        }
        if((one && t[0]=='1')||(one && t[m-1]=='1')){
            cout<<"NO\n";
        }
        else if((oo && t[0]=='0')||(oo && t[m-1]=='0')){
            cout<<"NO\n";
        }
        else cout<<"YES\n";
    }
}

signed main(){
    int t;
    //t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}
