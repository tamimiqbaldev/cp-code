//Arnob Vai-->CS, Senior
#include <bits/stdc++.h>
#define fastread() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define nl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define int long long
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
    int t=1;
    cin>>t;
    for (int tc=1;tc<=t;tc++)
    {
    	int x;
    	cin>>x;
    	int bit=__builtin_popcountll(x);
    	if (bit==1) cout<<-1<<nl;
    	else if ((x&(x+1))==0) cout<<-1<<nl;
    	else
    	{
    		int msb=63-__builtin_clzll(x);
    		int y=0;
    		for (int i=msb-1;i>=0;i--)
    		{
    			y+=(1LL<<i);
    		}
    		cout<<y<<nl;
    	}
    }
}