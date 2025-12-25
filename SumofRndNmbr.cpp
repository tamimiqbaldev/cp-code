#include<bits/stdc++.h>
using namespace std;


int main(){
    int t, n;
    cin>>t;
    while(t--){
        vector<int>vct;
        cin>>n;
        
        int pwr = 1;    
        while(n>0){
            int rem = n%10;
            if(rem>0) vct.push_back(rem*pwr);
            pwr*=10;
            n/=10;
        }
        cout<<vct.size()<<endl;
        for(auto it : vct){
           cout<<it<<" ";
        }
        cout<<endl;
    }
}