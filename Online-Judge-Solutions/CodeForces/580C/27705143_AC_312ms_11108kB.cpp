#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
vector <int> G[N];
int vis[N];
int cats[N];
int has_cats[N];
int counter=0,m,timer=0;
int st[N],et[N];
void dfs(int u){
    int v;
    if(vis[u]==0){
        st[u]=++timer;
    }
    vis[u]=1;
    for(int i = 0; i<G[u].size(); i++){
        v = G[u][i];
        if(vis[v]==0){
            if(has_cats[u]==1 && has_cats[v]==1) cats[v]+=cats[u];
            if(cats[u]>m) cats[v]=cats[u];
            dfs(v);
        }
    }
    et[u]=++timer;
    if(et[u]-st[u]==1 && cats[u]<=m) counter++;
}

int main(){
    ///freopen("input.txt","r", stdin);
    int n,u,v;
    cin>>n>>m;
    for(int i =1; i<=n; i++){
        cin>>has_cats[i];
        cats[i]=has_cats[i];
    }
    for(int i =1; i<n; i++){
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    dfs(1);
    cout<<counter<<"\n";
}
