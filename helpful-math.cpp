#include<iostream>
using namespace std;

int main(){
    string x,y;
    cin>>x;
    if(x.size()==1){
        cout<<x<<"\n";
        return 0;
    }

    //to count how many of 1,2,3 and print them out as said individually.
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    
    for(int i = 0; i<x.size(); i+=2){
        if(x[i]==49) cnt1++;
        else if(x[i]==50) cnt2++;
        else cnt3++;
    }
    
    //as we know how many 1,2,3 now print them out accordingly
    for(int j = 0; j<cnt1; j++) y+="1+";
    for(int k = 0; k<cnt2; k++) y+="2+";
    for(int j = 0; j<cnt3; j++) y+="3+";

    //int sum = cnt1+cnt2+cnt3;
    
    //for(int i = 0; i<sum-1; i++) cout<<y[i];

    y.pop_back(); //remove the last char of the string.
    cout<<y;
}

