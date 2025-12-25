#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int flr = 1; 
        int xx = 2;
        if(n<=2) cout<<flr<<endl;
        else{
            while(n>xx){
                flr++;
                xx+=x;
            }    
            cout<<flr<<endl;       
        }
    }
}