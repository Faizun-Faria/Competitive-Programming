#include <bits/stdc++.h>
using namespace std;

const int N = 5e5+5;

vector<int> G[N];
int vis[N];
vector <int> vec;
int sz=0;

void dfs(int u) {
    vis[u] = 1;
    for(int i = 0; i < G[u].size(); i++) {
        int v = G[u][i];
        if(vis[v] == 0) {
            vec.push_back(v);
            sz++;
            dfs(v);
        }
    }
}

int main() {
    int n, m, s, x,f;
    cin >> n>>m;

    for(int i=1; i<=m; i++){
        cin>>s;
        if(s==0)continue;
        else if(s>=1){
            cin>>f;
            for(int j=1; j<s; j++){
                cin>>x;
                G[f].push_back(x);
                G[x].push_back(f);
            }
        }
    }
    int num[n];
    for(int i=1;i<=n; i++){
        sz=1;
        if(vis[i]==0){
            vec.clear();
            vec.push_back(i);
            dfs(i);
            for(int i=0; i<vec.size(); i++){
                num[vec[i]]=sz;
            }
        }
    }
    for(int i=1;i<=n; i++){
        cout<<num[i]<<" ";
    }
}
