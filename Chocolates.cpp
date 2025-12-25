#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl "\n"

signed main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    
    int b[n];
    b[n-1] = a[n-1];
    for(int i = n-2; i>=0; i--){
        if(a[i]<b[i+1]) b[i] = a[i];
        else{
            if(b[i+1]-1>=0) b[i] = b[i+1]-1;
            else b[i] = 0;
        }
    }
    int coco = 0;
    for(int i = n-1; i>=0; i--){
        if(b[i]>0) coco += b[i];
        else break;
    }
    cout<<coco<<nl;
}
