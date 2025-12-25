#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,n;
        cin>>a>>b>>c>>n;
        long long mx = max(a,max(b,c));
        
        n-=((mx-a)+(mx-b)+(mx-c));

        if(n<0||n%3){
            cout<<"NO\n";
        }
        else cout<<"YES\n";
    }

}