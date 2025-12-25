#include<bits/stdc++.h>
using namespace std;


int main(){
    int t, n;
    cin>>t;
    int otpt;
    while(t--){
        cin>>n; 
        int cnt = (int) log10(n) + 1;
        int rem = n%10;
        otpt = (rem-1)*10;
        if(cnt == 4) otpt+=10;
        if(cnt == 3) otpt+=6; //factorial of that number of digit;
        if(cnt == 2) otpt+=3;
        if(cnt == 1) otpt+=1;
        cout<<otpt<<endl;
    }
}