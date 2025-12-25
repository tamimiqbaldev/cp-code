#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int>v = {1,1,1,2,2,3,3,3,0};
    sort(v.begin(), v.end());

    int cnt = 1;
    for(int j = 1; j<v.size(); j++){
        if(v[j]!=v[j-1]) cnt++;
    }
    cout<<cnt<<endl;
}