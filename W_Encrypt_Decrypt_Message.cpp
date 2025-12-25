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
   int n;
   string s;
   cin>>n>>s;
   string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
   string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
   
   
   if(n==1){
       int sz = s.size();
       for(int i = 0; i<sz; i++){
           if(s[i]>='a' && s[i]<='z') s[i]=Key[s[i]-'a'];
           else if(s[i]>='A' && s[i]<='Z') s[i]=Key[s[i]-'A'+26];
           else s[i]=Key[s[i]-'0'+52];
        }
        cout<<s<<nl;
        return;
    }    
    if(n==2){
        int sz = s.size();
        int ky =  Key.size();
        for(int i = 0; i<sz; i++){
            for(int j = 0; j<ky; j++){
                if(s[i]==Key[j]){
                    cout<<Original[j];
                    // s[i]=Original[j];
                }
            }
        }
        // cout<<s<<nl;
        return;
    }    
  
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