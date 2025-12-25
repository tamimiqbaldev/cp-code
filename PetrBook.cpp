#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, arr[8];
    cin>>n;
    for(int i=1; i<=7; i++) cin>>arr[i];

    int j = 1, sum = 0; 
    while(sum<n){
        if(j>7) j=1;
        sum+=arr[j];
        j++;
    }
    cout<<--j<<endl;
}