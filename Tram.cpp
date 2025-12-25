#include<iostream>
using namespace std;

int main(){
    int n;//number of stops from 1 to n
    cin>>n;
    int a, b;
    cin>>a>>b; //taking first input of first stoppage. a-> exit   b-> enter
    int psngr[n];//passenger count in each stoppage
    psngr[0] = b;
    //idea is to take all the passenger count after exit and entrance of passenger
    for(int i = 1; i<n; i++){
        cin>>a>>b;
        psngr[i] = psngr[i-1]-a+b;
    }
    //counting maxmm passenger among all stoppages.
    int max = psngr[0];
    for(int j = 1; j<n; j++){
        if(max<psngr[j]) max = psngr[j];
    }
    cout<<max<<"\n";
}