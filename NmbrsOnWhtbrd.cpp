#include<bits/stdc++.h>
using namespace std;


int main(){
    int t, n; 
    cin>>t;

    while(t--){
        cin>>n;
        
        cout<<(n+1)/2;

        int a = 0, b = 0; 
        for(int i = 1; i<=n-1; i++){
            a = a+b;
        }

    }
}