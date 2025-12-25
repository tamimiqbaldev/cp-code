// // #include <bits/stdc++.h>
// // using namespace std;
// // #define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
// // #define nl '\n'
// // #define ll long long
// // #define ull unsigned long long
// // #define flt long double
// // #define all(x) (x).begin(), (x).end()
// // #define rall(x) (x).rbegin(), (x).rend()
// // #define sum(x) accumulate(all(x), 0LL)
// // #define mpi map<int, int>
// // #define mps map<string, int>
// // #define seti set<int>
// // #define que queue<int>
// // #define dque deque<int>
// // #define prque priority_queue<int>  
// // #define aprque priority_queue<int, vector<int>, greater<int>>  
// // #define vec vector<ll>
// // #define vvec vector<vector<ll>>
// // #define yes cout<<"YES\n"
// // #define no cout<<"NO\n"
// // #define spc " "
// // #define fro(i,a,b) for(int i=(a);i<(b);++i)
// // #define rfro(i,a,b) for(int i=(a);i>=(b);--i)
// // #define each(x,a) for(auto &x : a)
// // #define sz(x) (int)(x).size()
// // #define gcd __gcd
// // #define lcm(a,b) ((a)/gcd(a,b)*(b))
// // #define mod 1000000007
// // #define modn(x) (((x)%mod+mod)%mod)
// // const int MAXN = 1e7; 
// // vector<int> dp(MAXN, -1); 


// // void solve(){
// //     int n; cin >> n;
// //     seti st;
// //     vec v(n); for(auto &val:v){
// //         cin >> val;
// //         st.insert(val);
// //     }
// //     int dis = size(st); 
// //     //value = len_of_vector - distinct

// //     if(dis == n){
// //         cout << 0 << nl; return;//to follow that the final length of the array to be minimum.
// //     }
// //     //to find longest subarray of just one frequenced element
// //     //thus to maximize l, r 
// //     for(int i = 1, l = 0, r = 0; i<n; i++){
        
// //     }   
// // }
// // signed main(){
// //     FAST_IO 
// //     int t; cin >> t; while(t--)
// //         solve();
   
// //     return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define debug(x) cout << #x << " = " << x << "\n";
// #define vdebug(a) cout << #a << " = "; for(auto x: a) cout << x << " "; cout << "\n";
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// int uid(int a, int b) { return uniform_int_distribution<int>(a, b)(rng); }
// ll uld(ll a, ll b) { return uniform_int_distribution<ll>(a, b)(rng); }

// void solve(){
//     int n;
//     cin >> n;

//     vector<int> a(n);
//     for (int &x : a) cin >> x;

//     vector<int> freq(n + 1);
//     for (int x : a) freq[x]++;

//     vector<int> len(n + 1);
//     len[0] = freq[a[0]] == 1;
//     for (int i = 1; i < n; i++)
//         if (freq[a[i]] == 1)
//             len[i] = len[i - 1] + 1;

//     // for(auto &val:len) cout << val << " ";
//     // cout<<endl;
    
//     int mx = *max_element(len.begin(), len.end());
//     if (mx == 0){
//         cout << "0\n";
//         return;
//     }

//     for (int i = 0; i < n; i++){
//         if (len[i] == mx){
//             cout << i - len[i] + 2 << " " << i + 1 << "\n";
//             return;
//         }
//     }
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
    
//     int t;
//     cin >> t;
//     while (t--) solve();
// }
#include <bits/stdc++.h>
using namespace std;
#define Ajkeo_Mara_Khamu_Bara ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
#define ll long long
#define ull unsigned long long
#define flt long double
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sum(x) accumulate(all(x), 0LL)
#define max(x) *max_element(all(x))
#define mpi map<int, int>
#define mps map<string, int>
#define seti set<int>
#define que queue<int>
#define dque deque<int>
#define prque priority_queue<int>  
#define aprque priority_queue<int, vector<int>, greater<int>>  
#define vec vector<ll>
#define vvec vector<vector<ll>>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define spc " "
#define fro(i,a,b) for(int i=(a);i<(b);++i)
#define rfro(i,a,b) for(int i=(a);i>=(b);--i)
#define each(x,a) for(auto &x : a)
#define sz(x) (int)(x).size()
#define gcd __gcd
#define lcm(a,b) ((a)/gcd(a,b)*(b))
#define mod 1000000007
#define modn(x) (((x)%mod+mod)%mod)
const int MAXN = 1e7; 
vector<int> dp(MAXN, -1); 

void solve(){
    int n; cin>>n;
    vec v(n+1), freq(n+1);
    fro(i, 1, n+1){
        cin>>v[i];
        freq[v[i]]++;
    }
        
    vec list(n+1);
    fro(i, 1, n+1){
        list[i] = freq[v[i]];
    }

    int mxfreq = max(freq);
    if(mxfreq==1){
        if(size(v)==1){
            cout<<1<<spc<<1<<nl;
        }else{
            cout<<0<<nl;
        }
        return;
    }

    int l, lidx, ridx, r, bloo = 0, mx_size = 0;
    fro(i, 2, n+1){
        if(list[i]==1){
            if(bloo==0){
                l = i;
            }
            bloo++;
            r = i;
            int tmp = r-l+1;
            if(tmp>mx_size){
                lidx = l;
                ridx = r;
                mx_size = tmp;
            }
        }else{
            bloo = 0;
        }
    }
    cout<<lidx<<spc<<ridx<<nl;
}
signed main(){
    Ajkeo_Mara_Khamu_Bara
    int t; cin>>t; while(t--)
        solve();
   
    return 0;
}