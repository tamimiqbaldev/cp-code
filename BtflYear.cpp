#include<iostream>
using namespace std;

bool distinct(int n);

int main(){
    int n;
    cin>>n;
    //if already distinct still to print out that next distinct

    if(distinct(n)) n++;
    
    while(!distinct(n)) n++;

    cout<<n<<"\n";

}
bool distinct(int n){
    //checking whether the given number is distinct or not.
    int i=0, j = 0;

    while(n!=0){
        n/=10;
        i++; 
    }

    int rem[i];

    while(n!=0){
        rem[j]=n%10;
        n/=10;
        j++; 
    }//1 2 3 4 2
    for(int k = 0; k<i-1; k++){
        for(int l = k; l<i-k-1; l++){
            if(rem[l]==rem[l+1]) return false;
        }        
    }
    return true;
}