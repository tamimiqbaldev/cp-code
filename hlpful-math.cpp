#include<iostream>
#include<string.h>
using namespace std;

//bubble sorting
int main(){
    string x,y;
    cin>>x;
    //to print out the given string in the right way.
    //to resolve the fence problem of printing out +
    //bubble sort?
    if(x.size()==1){
        cout<<x<<"\n";
        return 0;
    }
    for(int j = 0; j<x.size()-1; j+=2){
        for(int k = 0; k<x.size()-j-1;k+=2){
            if(x[k]>x[k+1]){
                int tmp = x[k];
                x[k] = x[k+1];
                x[k+1] = tmp;
            }
        }
    }
    cout<<x<<"\n";
}