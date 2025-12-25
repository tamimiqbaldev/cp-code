#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int x = n;
    int cnt = 0; 
    while(n){
        n/=10;
        cnt++;
    }

    long long decimal = 0;

    int i = 0; 
    while(x){
        int rem = x%10;
        x/=10;

        if(x==0){
            if(rem>=5 && rem<9) rem = (9-rem);
        }
        else{
            if(rem >= 5) rem = ( 9 - rem);
        }
        
        decimal = (rem * pow(10, i)) + decimal;
        i++;
    }
    cout<<decimal<<"\n";
}