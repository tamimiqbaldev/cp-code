#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(5);
    for(int i = 0; i<v.size(); i++) cin>>v[i];

    sort(v.begin(), v.end());
    int x;
    cin>>x;
    
    int l = 0, r = v.size()-1;
    while(l<=r){//what if just one element then no point to looping that's why leas than as usual but excessively mentioned equal~
        int m = (l+r)/2;
        if(v[m]==x){
            cout<<"Found\n";
            return 0;
        }
        else if(v[m]<x) l = m + 1;
        else r = m - 1;
    }
    cout<<"Not Found\n";
}