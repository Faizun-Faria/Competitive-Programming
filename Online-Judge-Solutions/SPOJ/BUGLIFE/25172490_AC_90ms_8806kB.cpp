
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector <int> G[N];
bool vis[N];
int depth[N];
int color[N];
bool flag;
void dfs(int u, int d) {
    vis[u] = 1;
    depth[u] = d;
    for(int i =0; i<G[u].size(); i++) {
        int v = G[u][i];
        if(vis[v]==0){
            if(color[u]==1){
                color[v]= 2;
            }else if(color[u]==2){
                color[v]= 1;
            }
            dfs(v, d+1);
        }else{
            if(color[v]==color[u]){
                flag = false;
            }
        }
    }
}
int main() {
    int t,n,m;
    cin>>t;
    for(int i=1; i<=t; i++) {
        flag = true;
        cin>>n>>m;
        for(int i = 1; i<=m; i++) {
            int u,v;
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
        }

        for(int i =1; i<=n; i++) {
            if(vis[i]==0) {
                color[i] = 1;
                dfs(i,1);
            }
        }
        cout<<"Scenario #"<<i<<":\n";
        if(flag == false) {
            cout<<"Suspicious bugs found!"<<"\n";
        } else {
            cout<<"No suspicious bugs found!"<<"\n";
        }
        memset(vis, 0, sizeof(vis));
        memset(depth, 0, sizeof(depth));
        memset(color, 0, sizeof(color));
        for(int i =1; i<=n; i++){
            G[i].clear();
        }
    }
}

