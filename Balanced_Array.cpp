#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int nn;
        cin>>nn;
        int n = nn/2;
        if(n&1) cout<<"NO\n";
        else{
            cout<<"YES\n";
            //evn part
            int a[nn];
            long long bhn = 0, sm = 0;
            int i;
            for(i = 0; i<n; i++){
                bhn += 2;
                a[i] = bhn;
                sm+=bhn;
            }
            //odd part
            long long vxd = 1, osm = 0;
            for(int j = i; j<nn; j++){
                if(j != nn-1){
                    a[j] = vxd;
                    osm+=vxd;
                }
                else a[j] = (sm-osm);
                vxd += 2;
            }
            for(int k = 0; k<nn; k++) cout<<a[k]<<" ";
            cout<<endl;
        }
    }
}