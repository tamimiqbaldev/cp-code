#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define int long long
#define all(x) (x).begin(), (x).end() 
#define pb push_back 
#define mp make_pair 

void solve() {
    // Solution
    /*
    shortcut:
    int n;
    cin>>n;
    string s="";
    while(n>0 && n%7!=0) n-=4,  s.push.back('4');
    while(n>0 && n%7==0) n-=7,  s.push.back('7');
    if(n==0) cout<<s<<nl;
    else cout<<-1<<nl;
    */
    int n;
    cin>>n;
    int old = n;
    int cnt = 0; 
    while(n>0){
        if(n%7==0){
            int svn = n/7;
            for(int i = 0; i<cnt; i++) cout<<4;
            for(int i = 0; i<svn; i++) cout<<7;
            cout<<nl;
            return;
        }
        n-=4;
        cnt++;
    }
    if(4*cnt == old){
        for(int i = 0; i<cnt; i++) cout<<4;
        cout<<nl;
        return;
    }
    cout<<-1<<nl;
}

signed main() {
    FAST_IO 
    int t;
    t = 1;
    // cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}