#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl "\n"

signed main(){
    int n, x, y;
    cin>>n>>x>>y;
    int a[n+1];
    for(int i = 1; i<=n; i++) cin>>a[i];
    bool v = true;
    for(int i = x+1; i<=n; i++){
        for(int j = i-x; j<=x; j++){
            if(a[i]>a[j]) {
                v = false;
                break;
            }
        }
        if(v){
            if(x+2+y>=n)
                for(int k = x+2; k<=n; k++){
                    if(a[i]>a[k]){
                        v = false;
                        break;
                    }
                }
            else{
                for(int k = x+2; k<(x+2+y); k++){
                    if(a[i]>a[k]){
                        v = false;
                        break;
                    }
                }
            }
        }
        if(v){
            cout<<i<<nl;
            break;
        }
    }
}
