#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin>>t;

    while(t--){
        cin>>n;
        if(n==1||n==3) cout<<-1<<"\n";
        else if(n%2==0){
            //n-2 times 3 printing followed by 66 for n being even.
            for(int i = 0; i<n-2; i++) cout<<3;
            cout<<66<<"\n";
        }
        else{
            //n-5 times 3 printing 
            for(int j = 0; j<n-5; j++) cout<<3;
            cout<<36366<<"\n";
        }
    }
}
