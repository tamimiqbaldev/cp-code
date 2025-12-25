#include<bits/stdc++.h>
using namespace std;
#define for(i,a,b) for(int i = a; i<b; i++)
typedef long long ll;

int main(){
    int n;
    cin>>n;

    int min = INT32_MAX;
    int max = INT32_MIN;

    int sldr[n];
    for(i, 0, n){
        cin>>sldr[i];
        if(sldr[i]>max) max=sldr[i];
        if(sldr[i]<min) min = sldr[i];
    }

    int mxc = 0, mnc = 0;

    for(j, 0, n){
        if(sldr[j]==max){
            mxc++;
            const int a = j;
        }

        else if(sldr[j]==min){
            mnc++;
            int b = j;
        }
        
        int l = (n-1-a) + (n-2-b) - mxc - mnc;
    }
}