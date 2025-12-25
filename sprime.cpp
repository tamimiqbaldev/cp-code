#include<iostream>
#include<cmath>
using namespace std;

int main(){
    //prime number from n1 to n2

    int n1, n2;
    cin>>n1>>n2;
    for(int i = n1; i<=n2; i++){
        if(i<=1){
            cout<<"Not Prime\n";
            continue;
            //this continue won't let i execute those number less than 1 but go 
            //for another iteration.
        }
    
        for(int j = 2; j<=sqrt(i); j++){
            if(i%j==0){
                cout<<"Not Prime\n";
                //not prime are also not divisible by all remember-->reminder!
                break;
            }
        }
        cout<<"Prime\n";
    }
}