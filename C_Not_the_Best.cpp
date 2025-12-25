/* This is the same dawn -- the one in which truth shall rise as falsehood falls. By the promise of my Almighty, oppression shall perish, and justice shall prevail.  Free Palestine. Free the Uyghurs. Free the Rohingyas.  Free Sudan, Yemen, Iraq, and every land where the blood of the innocent cries out.  "They wish to extinguish the light of Allah with their mouths, but Allah will perfect His light -- even if the disbelievers hate it." -- Surah As-Saff (61:8)  And say: "Truth has come and falsehood has vanished. Indeed, falsehood is bound to vanish." -- Surah Al-Isra (17:81)  May the curse of my Lord be upon the oppressors, the tyrants, and the usurpers of truth. May their plans be shattered as were those of Firaun, and their legacy buried like Aad and Thamud.  We stand with our oppressed brothers and sisters -- not with slogans, but with conviction. Victory will surely come to those who stand firm upon the Haqq.  "So bear beautiful patience. They see it far off, but We see it near." -- Surah Al-Ma'arij (70:5-7)  May mankind rise with justice, and may falsehood vanish -- as it is always bound to. */

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define Ajkeo_Mara_Khamu_Bara FAST_IO

// ------------------ [Type Aliases] ------------------
#define ll long long
#define ull unsigned long long
#define flt long double
#define vec vector<ll>
#define vvec vector<vector<ll>>
#define MP map<ll, ll>//Reminder: MAP potentially conflict on c++20+
#define SET set<ll>
#define que queue<ll>
#define dque deque<ll>
#define prque priority_queue<ll>
#define aprque priority_queue<ll, vector<ll>, greater<ll>>

// ------------------ [STL Macros] ------------------
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
// #define size(x) (ll)(x).size()
#define sum(x) accumulate(all(x), 0LL)
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define STR_TOUPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define STR_TOLOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)

// ------------------ [Looping Macros] ------------------
#define rep(i,a,b) for(ll i=(a);i<(b);++i)
#define rrep(i,a,b) for(ll i=(a);i>=(b);--i)
#define each(x,a) for(auto &x : a)

// ------------------ [Math] ------------------
#define gcd __gcd
#define lcm(a,b) ((a)/gcd(a,b)*(b))
#define mod 1000000007 // 1e9+7
#define modn(x) (((x)%mod+mod)%mod)

// ------------------ [Output Helpers] ------------------
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl '\n'
#define spc " "

// ------------------ [Debugging] ------------------
#define dbg(x) cerr << #x << " = " << x << nl
#define printv(v) for(auto x : v) cerr << x << ' '; cerr << nl

// ------------------ [Constants & Globals] ------------------
const ll octroi = 1e7;
// vector<int> dp(octroi, -1); 
// bitset<octroi> vc;

vector<pair<int,int>>g[5005];
long long dist1[5005], dist2[5005];

void dijkstra(int start, int end, int n){
    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>>pq;
    
    for(int i = 1; i<=n; i++){
        dist1[i] = LLONG_MAX;
        dist2[i] = LLONG_MAX;
    }
    
    dist1[start] = 0;
    pq.push({0, start});
    
    while(!pq.empty()){
        auto d = pq.top().first;
        auto u = pq.top().second;
        pq.pop();
        
        if(d > dist2[u]) continue;
        
        for(auto edge: g[u]){
            ll v = edge.first;
            ll w = edge.second;
            ll new_dist = d + w;
            
            if(new_dist < dist1[v]){
                dist2[v] = dist1[v];
                dist1[v] = new_dist;
                pq.push({dist1[v], v});
                pq.push({dist2[v], v});
            }else if(new_dist < dist2[v] && new_dist > dist1[v]){
                dist2[v] = new_dist;
                pq.push({dist2[v], v});
            }
        }
    }
}

int main(){
    Ajkeo_Mara_Khamu_Bara

    int T; cin>>T;
    
    for(int case_num = 1; case_num <= T; case_num++){
        int n, r; cin>>n>>r;
        
        for(int i = 1; i<=n; i++){
            g[i].clear();
        }
        
        for(int i = 0; i<r; i++){
            int u, v, w; cin>>u>>v>>w;
            g[u].push_back({v, w});
            g[v].push_back({u, w});
        }
        
        dijkstra(1, n, n);
        
        cout<<"Case "<<case_num<<": "<<dist2[n]<<endl;
    }
    
    return 0;
}