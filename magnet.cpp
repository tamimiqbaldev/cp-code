#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char x[2*n];
    //parts are (repulsion+1)
    for(int i = 0; i<2*n; i++) cin>>x[i];
    
    int prt = 1; 
    for(int j = 1; j<2*n; j+=2){
        if(x[j]==x[j+1]) prt++;
    }
    cout<<prt<<"\n";
}