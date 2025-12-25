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
    string s;
    cin>>s;
    string x = "";
    x+=toupper(s[0]);
    for(int i = 1; s[i]!='\0'; i++){
        if(s[i]=='s') x+='$';
        else if(s[i]=='i') x+='!';
        else if(s[i]=='o') x+="()";
        else x+=s[i];
    }
    cout<<x<<"."<<nl;
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