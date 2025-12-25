#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n<26){
        cout<<"NO\n";
        return 0;}

    else if(n>26 || n==26){
        set<char>c;
        for(int i = 0; i<n; i++){
            if(s[i]>=65 && s[i]<=90){
                s[i] += 32;
                c.insert(s[i]);}

            else c.insert(s[i]);
        }
       if(c.size()==26) cout<<"YES\n";
       else cout<<"NO\n";
    }
}