#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

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

int main() {

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    dfs(1, 1);

    return 0;
}
