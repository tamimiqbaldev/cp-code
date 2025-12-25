#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    //odd-->hate   even-->love
    if(n==1){
        cout<<"I hate it\n"; 
        return 0;
    }
    
    for(int i = 1; i<n; i++){
        if(i%2!=0) cout<<"I hate that ";
        else cout<<"I love that ";
    }

    if(n%2!=0) cout<<"I hate it\n";
    else cout<<"I love it\n";
}