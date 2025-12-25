#include<bits/stdc++.h>
using namespace std;


int main(){
    long long n;
    cin>>n;
    long long nmbr = 0;
    int i = 0;
    while(n){
        int rem = n%10;
        int x = n/10;

        /*if(rem>=5 && x!=0) rem = (9-rem);
        else if(x == 0 && rem>=5 && rem<9) rem = (9-rem);*/
        //otherwise rem will be same as it's 
        if(x!=0){
            if(rem>=5) rem = (9-rem);
        }
        else{
            if(rem>=5 && rem<9) rem = (9-rem);
        }

        nmbr = rem*pow(10,i) + nmbr;
        i++;
        n/=10;  
    }   

    cout<<nmbr<<"\n";
}