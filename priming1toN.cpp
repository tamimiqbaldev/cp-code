#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==2){
        cout<<2<<"\n";
        return 0;
    }
    cout<<2<<" ";
    //from 3 to n priming as the condition gets fucked up
    for(int i = 3; i<=n; i++){
        bool prime = true;
        for(int j = 2; j<=sqrt(i); j++){//prime checking from 2 to sqrt(n) 
            if(i%j == 0) prime = false;
        }
        if(prime) cout<<i<<" ";
    }
    cout<<"\n";
}