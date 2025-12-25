#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string x,y;
    cin>>x>>y;
    for(int i = 0; i<x.size(); i++){
        //convert those small letter into capital as they are equivalent
        if(x[i]>=97) x[i] -= 32;
        if(y[i]>=97) y[i] -= 32;
        
        //comparing the individual string with its ascii value 
        if(x[i]>y[i]){
            cout<<1<<"\n"; 
            return 0;
        }
        if(x[i]<y[i]){
            cout<<-1<<"\n"; 
            return 0;
        }
    }
    cout<<0<<"\n";
    return 0;
}