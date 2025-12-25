#include <bits/stdc++.h>
#define fastread() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// #define ll long long
#define int long long
#define nl "\n"
const int N=2e5+7,M=1e9+7;
const double pi=acos(-1.0);

signed main()
{
	fastread();
	if (fopen("input.in","r")) 
	{
		freopen("input.in","r",stdin);
		freopen("output.out","w",stdout);
	}

    int t;
    cin>>t;
    while(t--){
		cout<<"hello\n";
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// #define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
// #define nl '\n'
// #define int long long
// #define flt double

// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define pb push_back
// #define mp make_pair

// #define vi vector<int>
// #define vvi vector<vi>
// #define vvvi vector<vvi>
// template<typename T> using v = vector<T>;  

// #define forn(i, n) for(int i = 0; i < int(n); i++)
// //for(int i = 0; i<n; i++)
// // for(int i = 0; s[i]!='\0'; i++)


// for(int i = 0; i<n; i++)
// for(int i = 0; s[i]!='\0'; i++)
// void yes(){
//     cout<<"YES\n"; return;
// }
// void no(){
//     cout<<"NO\n"; return;
// }

// void solve() {
//    //Code:
  
// }

// signed main() {
//     FAST_IO
//     int t;
//     // t = 1; 
//     // cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }