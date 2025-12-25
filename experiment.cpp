#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define spc " " 

int main(){
    // vector<ll>vec{1, 1, 2, 2, 2, 3};
    // rotate(vec.begin(), vec.end()-1, vec.end());
    
    vector<int> v = {1, 2, 3, 4, 5};
    
    // Rotate range [1, 3] (indices 1 to 3 inclusive)
    rotate(v.begin() + 1, v.begin() + 3, v.begin() + 4);
    // Before: {1, [2, 3, 4], 5}
    // After:  {1, [4, 2, 3], 5}
    
        for(auto i : v){
            cout<<i<<spc;
        }cout<<nl;



    return 0;
}