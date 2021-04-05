#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector < pair<int,int> > vp;
vector<int> G[N];
bool vis[N];
int depth[N];

void dfs(int u, int d) {
    vis[u] = 1;
    depth[u] = d;
    for(int i = 0; i < G[u].size(); i++) {
        int v = G[u][i];
        if(vis[v] == 0) {
            dfs(v, d+1);
        }
    }
}
int main(){
    int n,x,y;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        vp.push_back(make_pair(x,y));
    }
    for(int i=0; i<n; i++){
        for (int j= i+1; j<n; j++){
            if(vp[i].first==vp[j].first || vp[i].second==vp[j].second ){
                G[i].push_back(j);
                G[j].push_back(i);
            }
        }
    }
    int co=-1;
    for(int i=0; i<n; i++){
        if(vis[i]==0){
            dfs(i,1);
            co++;
        }
    }
    cout<<co<<"\n";
}
