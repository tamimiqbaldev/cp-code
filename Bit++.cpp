#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int i = 0;
    int cnt = 0; 
    while(n){
        n/=10;
        cnt++;
    }
    int prsnt = 0;
    int decimal = 0; 
    while(n){
        prsnt++;
        int rem = n%10;
        if(rem>=5 && prsnt != cnt) rem = (9-rem);
        decimal = (rem * pow(10, i)) + decimal;
        n/=10;
        i++;
    }
    cout<<decimal<<"\n";
}