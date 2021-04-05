#include <bits/stdc++.h>
using namespace std;
const int N = 105;
vector <int> G[N];
int x[N], y[N],vis[N];
set <int> nodes;

void dfs(int u){
    int v;
    vis[u]=1;
    nodes.erase(u);
    for(int i=0; i<G[u].size(); i++){
        v = G[u][i];
        if(vis[v]==0){
            dfs(v);
        }

    }
}

int main(){
    //freopen("input.txt", "r", stdin);
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>x[i]>>y[i];
        nodes.insert(i);
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(x[i]==x[j] || y[i]==y[j]){
                G[i].push_back(j);
                G[j].push_back(i);
            }
        }
    }
    int counter = -1;
    while(nodes.size()>0){
        counter++;
        dfs(*nodes.begin());
    }
    cout<<counter<<"\n";
}


