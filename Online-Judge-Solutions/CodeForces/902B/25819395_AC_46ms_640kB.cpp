#include <bits/stdc++.h>
using namespace std;
const int N = 1e4+10;
vector <int> G[N];
int c[N];
int vis[N];
int co=1;
void dfs(int u){
    vis[u]=1;
    for(int i=0; i<G[u].size(); i++){
        int v = G[u][i];
        if(vis[v]==0){
            if(c[u]!=c[v])co++;
            dfs(v);
        }
    }
}
int main() {
    int n,x;
    cin>>n;
    for(int i=2; i<=n; i++){
        cin>>x;
        G[x].push_back(i);
        G[i].push_back(x);
    }
    for(int i=1; i<=n; i++){
        cin>>c[i];
    }
    dfs(1);
    cout<<co<<"\n";
}
