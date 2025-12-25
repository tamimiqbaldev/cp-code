#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

void solve() {
    string s;
    cin>>s;
    int sz = s.size();
    bool chay = true;
    if(sz==1) cout<<-1<<nl;
    else if(sz == 2){
        if(s[0] != s[1]) cout<<-1<<nl;
        else cout<<s<<nl;
    }
    else{
        for(int i = 1; i<sz-1; i++){
            if(s[i]==s[i-1]) {
                cout<<s[i]<<s[i-1]<<nl;
                chay = false;
                break;
            }
            else if(s[i]==s[i+1]) {
                cout<<s[i]<<s[i+1]<<nl;
                chay = false;
                break;
            }
            else if(s[i] != s[i-1] && s[i] != s[i+1] && s[i-1] != s[i+1]){
                cout<<s[i-1]<<s[i]<<s[i+1]<<nl;
                chay = false;
                break;
            }
        }
        if(chay) cout<<-1<<nl;
    }
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}
