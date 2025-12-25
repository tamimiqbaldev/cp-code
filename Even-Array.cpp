#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int t; 
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int evn, od;
            if(n&1){
                evn = (n+1)/2;
                od = n/2;
            }
            else{
                evn = n/2;
                od = evn;
            }

            int ecnt = 0, ocnt = 0;

            int a[n];
            for(int i = 0; i<n; i++){
                cin>>a[i];
                if(a[i]&1) ocnt++;
                else ecnt++;
            }
            int mv = 0;
            if(ecnt == evn && ocnt == od){
                for(int i = 0; i<n-1; i++){
                    int idx = (i%2);
                    if(a[i]!=idx){
                        for(int j = i+1; j<n; j++){
                            if(a[j]!=idx) mv++;
                            else swap(a[j], a[i]);
                        }
                    }
                }
                cout<<mv<<endl;
            }
            else cout<<-1<<endl;
        }
    }

}