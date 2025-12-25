#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, m; 
    cin>>n>>m;

    for(int i = 1; i<=n; i++){
        if(i&1){
            for(int j = 1; j<=m; j++) cout<<"#";
            cout<<"\n";
        }
        else if(i%4==0){
            cout<<"#";
            for(int k = 1; k<m; k++) cout<<".";
            cout<<"\n";
        }
        else{
            for(int k = 1; k<m; k++) cout<<".";
            cout<<"#\n";
        }
    }
}