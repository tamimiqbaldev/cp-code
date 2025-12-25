#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vi vector<int>
#define nl '\n'
#define ll long long
#define flt double
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int casing = 1;

void solve(){
    string dec, bin;
    cin>>dec>>bin;

    string fanna = "";
    vi deci;
    for(int i = 0, sz = dec.size(); i<sz; i++){
        if(dec[i]=='.' || (i == sz-1)){
            if(i == sz-1) fanna += dec[i];
            deci.emplace_back(stoi(fanna));
            fanna = "";
            continue;
        }
        fanna+=dec[i];
    }

    fanna = "";

    int idx = 0;

    //binary to decin
    for(int i = 0, sz = bin.size(); i<sz; i++){
        if(bin[i]=='.' || (i == sz-1)){
            if(i == (sz-1)) fanna+=bin[i];

            ll decimal = 0;
            int cn = 0;
            int szz = fanna.size();
            for(int j = szz - 1; j>=0; j--){
                decimal += ((fanna[j]-'0')*(1<<cn));
                cn++;
            }
            if(decimal != deci[idx]){
                cout<<"Case "<<casing++<<": No\n";
                return;
            }
            idx++;
            fanna = "";
            continue;
        }
        fanna+=bin[i];
    }
    cout<<"Case "<<casing++<<": Yes\n";
}

int main() {
    FAST_IO
    int t; cin>>t; while(t--)
    solve();
    return 0;
}