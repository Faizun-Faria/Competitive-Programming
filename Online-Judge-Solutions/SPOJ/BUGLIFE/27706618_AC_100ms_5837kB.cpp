#include <bits/stdc++.h>
using namespace std;
const int N = 2005;
vector <int> G[N];
int vis[N];
int color[N];
set <int> nodes;
bool susp;
void dfs(int u){
    nodes.erase(u);
    int v;
    vis[u]=1;
    for(int i=0; i<G[u].size(); i++){
        v = G[u][i];
        if(vis[v]==0){
            if(color[u]==1)  color[v]=2;
            else if (color[u]==2)  color[v]=1;
            dfs(v);
        }else{
            if(color[u]==color[v]) {
                susp=true;
                return;
            }
        }
    }
}
int main(){
    //freopen("input.txt", "r", stdin);
    int scene,bug,itr,a,b;
    cin>>scene;
    for(int i=1; i<=scene; i++){
        susp=false;
        cin>>bug>>itr;
        for(int j =0; j<itr; j++){
            cin>>a>>b;
            G[a].push_back(b);
            G[b].push_back(a);
            nodes.insert(a);
            nodes.insert(b);
        }
        cout<<"Scenario #"<<i<<":\n";
        while(nodes.size()>0){
            int start = *nodes.begin();
            color[start]=1;
            dfs(start);
        }
        if(susp) {
            cout<<"Suspicious bugs found!\n";
        }else{
            cout<<"No suspicious bugs found!\n";
        }
        memset(color,0, sizeof(color));
        memset(vis,0, sizeof(vis));
        for(int j =1; j<=bug; j++){
            G[j].clear();
        }
    }
}
