#include<bits/stdc++.h>
using namespace std;


int main(){
    int t, n, a, b;
    cin>>t; 
    while(t--){
        cin>>a>>b>>n;

        int cnt = 0;
        while(max(a,b)<=n){
        //ensure to a+=b whereas a<b
        if(a>b) swap(a,b);
        a+=b;
        cnt++;
       }
       cout<<cnt<<endl;
    }
    
}