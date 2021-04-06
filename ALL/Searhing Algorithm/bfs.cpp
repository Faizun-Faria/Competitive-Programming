#include <bits/stdc++.h>
using namespace std;
void bfs(vector<int> G[], int initial, int maxNodes, bool vis[]){
    queue <int> nodes;
    nodes.push(initial);
    while(!nodes.empty()){
        int u = nodes.front();
        cout<<u<<" ";
        vis[u]= 1;
        nodes.pop();
        for(int i = 0; i < G[u].size(); i++){
            if (vis[G[u][i]] == 0)    {
                vis[G[u][i]] = 1;
                nodes.push(G[u][i]);
            }
        }
    }
}
void addEdges(vector<int>* G, int u, int v){
    G[u].push_back(v);
    G[v].push_back(u);
}
int main(){
    int edges, u, v;
    cin>>edges;
    int maxNodes = 2*edges;
    bool vis[maxNodes];
    memset(vis,0,sizeof(vis));
    vector <int> G[maxNodes];
    for(int i = 0; i < edges; i++){
        cin>>u>>v;
        addEdges(G, u, v);
    }
    bfs(G, 1, maxNodes, vis);
}
