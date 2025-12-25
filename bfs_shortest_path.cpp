#include <bits/stdc++.h>
using namespace std;

vector<int>g[100005];
int visited[100005];//to calculate distance of a node from mother node meaning distance between end and start in here.
int dist[100005];

//level wise traversing
void bfs(int start, int end){
    queue<int>q;
    q.push(start);
    dist[start] = 0;
    visited[start] = 1;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        if(u==end){
            cout<<dist[u]<<endl; return;
        }
        for(auto v: g[u]){
            if(visited[v]) continue;
            if(v==end){
                dist[v] = dist[u]+1;
                cout<<dist[v]<<endl; return;
            }else{
                dist[v] = dist[u]+1;
            }
            q.push(v);
            visited[v] = 1;
        }
    }
    cout<<"Not found\n";
}

int main(){
    int n, m; cin>>n>>m;//n->no. of node m->no. of edge

    for(int i = 0; i<m; i++){
        int u, v; cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int start, end; cin>>start>>end;
    bfs(start, end);
    cout<<endl;

    return 0;
}
