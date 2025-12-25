#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int cnt_odd = 0, cnt_evn= 0;
        for(int i = 0; i<n; i++){
            cin>>a[i];
            if(a[i]&1)  cnt_odd++;
            else cnt_evn++;
        }
        if(cnt_odd==0) cout<<"NO\n";
        else if(cnt_evn > 0 || cnt_odd&1==1) cout<<"YES\n";
        else cout<<"NO\n";

    }
}