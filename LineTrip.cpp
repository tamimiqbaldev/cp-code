#include<bits/stdc++.h>
using namespace std;
#define for(i,a,b) for(int i = a; i<b; i++)
typedef long long ll;

int main(){
    int t, s, d;
    cin>>t;
    while(t--){
        cin>>s>>d;
        int arr[s];
        for(i, 0, s) cin>>arr[i];

        int max_dif = INT_MIN;
        for(j, 0, s-1){
            int difn = (arr[j+1]-arr[j]);
            if(difn>max_dif) max_dif = difn;
        }

        int lst = 2*abs(d-arr[s-1]);
        if(s==1){
            if(lst>arr[0]) cout<<lst<<"\n";
            else cout<<arr[0]-0<<"\n";}

        else{
            if(lst>max_dif) cout<<lst<<"\n";
            else cout<<max_dif<<"\n";
        }
        
    }
}