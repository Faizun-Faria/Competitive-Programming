#include <bits/stdc++.h>
using namespace std;

const int N = 2e5;
vector <int> G[N];
int vis[N];
int par[N];

void dfs(int u) {
    vis[u] = 1;
    for(int i = 0; i < G[u].size(); i++) {
        int v = G[u][i];
        if(vis[v] == 0) {
            par[v] = u;
            dfs(v);
        }
    }
}


int main(){
    int n,x;
    cin>>n;
    for(int i=2; i<=n; i++){
        cin>>x;
        G[x].push_back(i);
        G[i].push_back(x);
    }
    dfs(1);
    vector <int> v;
    x = n;
    while(x!=1){
        v.push_back(x);
        x= par[x];
    }
    v.push_back(1);
    for(int i=v.size()-1; i>=0; i--){
        cout<<v[i]<<" ";
    }
}
