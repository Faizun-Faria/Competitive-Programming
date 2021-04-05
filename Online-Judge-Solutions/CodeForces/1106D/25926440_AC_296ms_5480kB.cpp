#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+100;
vector< int > G[N];
int vis[N];
priority_queue <int,vector<int>,greater<int>> pq;
int main() {
    int nodes, edges;
    cin>>nodes>>edges;
    vector <int> ans;
    ans.clear();
    for(int i=1; i<=edges; i++) {
        int u, v;
        cin>>u>>v;
        if(u!=v) {
            G[u].push_back(v);
            G[v].push_back(u);
        }
    }
    pq.push(1);
    vis[1]=1;
    while(!pq.empty()){
        int uu = pq.top();
        pq.pop();
        ans.push_back(uu);

        for (int i=0; i<G[uu].size(); i++) {
            int vv = G[uu][i];
            if(vis[vv]==0) {
                pq.push(vv);
                vis[vv]=1;
            }
        }
    }

    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
}
