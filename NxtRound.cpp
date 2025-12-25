#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int test[n];
    for(int i = 0; i<n; i++){
        cin>>test[i];
    }
    //how many contestants passed 
    //they crossed or equal to the mark of test[k-1]
    //they also obtained more than 0 or positive score
    int count = 0;
    for(int j = 0; j<n; j++){
        if(test[j]>0 && test[j]>=test[k-1]) count++;
    }
    cout<<count<<"\n";
    
}