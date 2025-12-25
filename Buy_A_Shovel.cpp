#include<bits/stdc++.h>
using namespace std;


int main(){
    int k, r;
    cin>>k>>r;
    int rem = k%10;
    if(rem == r || rem == 0) cout<<1<<endl;
    else{
        int n = 2;
        while(1){
            int cicin_fak = k * n;
            n++;
            rem = cicin_fak % 10; 
            if(rem == 0 || rem == r) {
                // cout<<n-1<<endl;--->This one is correct too!
                cout<<cicin_fak/k<<endl;
                break;
            }
        }
    }
}