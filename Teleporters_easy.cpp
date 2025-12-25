#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; 
    cin>>t;
    while(t--){
        int n, c, tlprt = 0;
        cin>>n>>c;

        vector<pair<int, int>>v(n);
        for(int i = 0; i<n; i++){
            cin>>v[i].second;
            v[i].first = v[i].second+i+1;
        }
        sort(v.begin(), v.end());

        for(int j = 0; j<n; j++){
            c-=v[j].first;
            if(c>=0) tlprt++;
            else break;
        }
        cout<<tlprt<<endl;
    }    
}

