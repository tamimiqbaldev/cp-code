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


void solve() {
    //Code:
    string s;
    cin>>s;
    int cno = 0, sm = 0;
    bool evn = false;
    for(int i = 0; s[i]!='\0'; i++){
        sm+=(s[i]-'0');
        if(s[i]=='0') cno++;    
        else if(((s[i]-'0')&1)==0) evn = true;//evn is accounted without including 0 due to else usage cz what if in a situation just one 0 and all digits odd? then cz problem
    }
    if(((sm%3)==0) && ((cno>1)||(cno==1 && evn))) cout<<"red\n";
    else cout<<"cyan\n";

}

int main() {
    FAST_IO
    int t;
    // t = 1; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}