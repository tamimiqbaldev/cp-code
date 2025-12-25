//Dice Tower.
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=14) cout<<"NO\n";
        else if (n%14 >=1 && n%14 <= 6) cout<<"YES\n";
        else cout<<"NO\n";
    }
}