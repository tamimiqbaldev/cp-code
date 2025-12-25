#include<iostream>
#include<cmath>
using namespace std;

int main(){
    //prime number
    int n;
    cin>>n;
    if(n<=1) cout<<"Not Prime\n";
    
    for(int i = 2; i*i<=n; i++){
        if(n%i==0){
            cout<<"Not Prime\n";
            return 0;
        }
    }
    cout<<"Prime\n";
    return 0;
}