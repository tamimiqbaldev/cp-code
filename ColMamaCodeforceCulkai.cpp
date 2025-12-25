#include<bits/stdc++.h>
using namespace std;

int LCM(int x, int y){
    int xx = x;
    int yy = y;
    while(x){
        int rem = y%x;
        y = x;
        x = rem; 
    }
    return (xx*yy)/y;
}
int main(){
    int t; 
    cin>>t;
    
    
    while(t--){
        int l, r; 
        cin>>l>>r;
        int x = l;
        int y = l+1;
        
    }
}