#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int vis[N];// initially set to 0
void dfs(vector<int> G[], int initial ){
    int u = initial;
    vis[u] = 1;
    cout<<u<<" ";
    for(int i = 0; i < G[u].size(); i++){
        if(vis[G[u][i]] == 0){
            vis[G[u][i]] = 1;
            dfs(G, G[u][i]);
        }
    }

}

void addNodes(vector<int>* G, int u, int v){
    G[u].push_back(v);
    G[v].push_back(u);
}
int main(){
    int edges, u, v;
    cin>>edges;
    int maxNodes = 2*edges;
    vector<int> G[maxNodes];
    for(int i = 0; i < edges; i++){
        cin>>u>>v;
        addNodes(G, u, v);
    }
    dfs(G,1);
}
