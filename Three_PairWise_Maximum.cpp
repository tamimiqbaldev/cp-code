#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x[3];
        set<int>s;
        for(int i= 0; i<3; i++){
            cin>>x[i];
            s.insert(x[i]);
        }
        if(s.size()==1){
            cout<<"YES\n";
            for(int i = 0; i<3; i++) cout<<x[0]<<" ";
            cout<<endl;
        }
        else if(s.size() == 2){
            sort(x, x+3);
            if(x[2]==x[1]){
                cout<<"YES\n";
                cout<<x[0]<<" "<<x[0]<<" "<<x[2]<<endl;
            }
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
}