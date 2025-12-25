#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define flt double
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vi vector<int>
// int n;
// vi v(10^9);//using pointer instead of Global Variable is better-Borson Sir 

void maxx(vi &v, int n){
    int mx = v[0];
    for(int i = 1; i<n; i++){//implied new way max
        if(mx<v[i]) mx = v[i];
    }
    cout<<"The maximum number : "<<mx<<nl;
}
void minn(vi &v, int n){
    int mn = v[0];
    for(int i = 1; i<n; i++){//implied new way min
        if(mn>v[i]) mn = v[i];
    }
    cout<<"The minimum number : "<<mn<<nl;
}
bool prime(int n){
    if(n==1) return false;
    for(int i = 2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}
void priming(vi &v, int n){
    int cnt = 0;
    for(int i = 0; i<n; i++){
        if(prime(v[i])) cnt++;
    }
    cout<<"The number of prime numbers : "<<cnt<<nl;
}

// bool palindrome(int n){
//     if(n>=1 && n<=9) return true;
//     vi pl;//declaring size of vector and emplace_back stuff understanding.
//     while(n){
//         pl.emplace_back(n%10);
//         n/=10;
//     }
//     int sz = pl.size();

//     for(int i = 0, szz = (sz/2); i<szz; i++){
//         if(pl[i]!=pl[sz-1-i]) return false;
//     }
//     return true;
// }
//a better approach for palindrome
bool palindrome(int n){
    string s = to_string(n);
    string ss = s;
    reverse(all(s));
    return ss == s;
}

void palindroming(vi &v, int n){
    int cn = 0; 
    for(int i = 0; i<n; i++){
        if(palindrome(v[i])) cn++;
    }
    cout<<"The number of palindrome numbers : "<<cn<<nl;
}

int divisor(int n){
    int cn = 0;
    for(int i = 1, sq = sqrt(n); i<=sq; i++){//a better approach I thought of which I never did - Alhamdulillah
        if(((n%i)==0) && ((n/i)!=i)) cn+=2;
        else if(((n%i)==0) && ((n/i)==i)) cn++;
    }
    return cn;  //8 14
}

void divisoring(vi &v, int n){
    vi dvcn;
    sort(rall(v));
    for(int i = 0; i<n; i++){
        dvcn.emplace_back(divisor(v[i]));
    }
    int mx = dvcn[0], mxidx = 0;//initializing cz what if mx value's index is 0 then it doesn't get printed!That's why initialized the mxidx = 0;
    for(int i = 1, sz = dvcn.size(); i<sz; i++){
        if(dvcn[i]>mx){
            mx = dvcn[i];
            mxidx = i;
        }
    }
    cout<<"The number that has the maximum number of divisors : "<<v[mxidx]<<nl;
    
}

void solve() {
   //Code:
    int n; cin>>n;
    vi v(n); for(int i = 0; i<n; i++) cin>>v[i];
    
    maxx(v, n);
    minn(v, n);
    priming(v, n);
    palindroming(v, n);
    divisoring(v, n);
}

int main() {
    FAST_IO
    // int t; cin>>t; while(t--)
    solve();
    return 0;
}