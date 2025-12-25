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
    string s, ss;
    cin>>s>>ss;
    if(s.size()!=ss.size()){
        cout<<"No\n";
        return;
    }
    sort(all(s));
    sort(all(ss));
    for(int i = 0; i<s.size(); i++){
        if(s[i]!=ss[i]){
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
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