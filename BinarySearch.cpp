#include<bits/stdc++.h>
using namespace std;

int main(){     
    int n, x; 
    cin>>n;
    vector<int>v(n);

    for(int i = 0; i<n; i++) cin>>v[i];
    
    cin>>x;
    sort(v.begin(), v.end());
    //Binary Search
    // cout<<endl;
    // for(int i = 0; i<n; i++) cout<<v[i]<<" ";

    int l = 0,  r = n-1;
    while(l<=r){
        int av = (l+r)/2;
        if(v[av]==x) {
            cout<<"Found"<<endl;
            return 0;
        }
        else if(v[av]<x) l = av+1;
        else r = av-1;
    }
    
    
}