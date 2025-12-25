#include<bits/stdc++.h>
using namespace std;
#define for(i,a,b) for(int i = a; i<b; i++)
typedef long long ll;

int main(){
    int n, a;
    cin>>n;
    for(i, 0, n){
        cin>>a;
        if(a==1){
            cout<<"HARD\n";
            return 0; 
        }
    }
    cout<<"EASY\n";
}