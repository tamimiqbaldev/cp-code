#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int>v(n), vv(n);

    for(int i = 0; i<n; i++){
        cin>>v[i];
        vv[i]=v[i];
    }

    sort(v.begin(), v.end());
    for(int i = 0; i<n; i++) cout<<v[i]<<" ";
    cout<<endl;

    sort(vv.rbegin(), vv.rend());
    for(int i = 0; i<n; i++) cout<<vv[i]<<" ";
    cout<<endl;


    //sorting string
    string s = "monkey";
    sort(s.begin(), s.end());
    cout<<s<<endl;
}