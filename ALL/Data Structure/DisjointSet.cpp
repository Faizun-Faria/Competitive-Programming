#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5+10;
int par [mx];
int sz[mx]; 

int Find(int x){
    if(par[x] == x) return x;
    return par[x] = Find(par[x]); /// Path Compression
}
bool Union(int u, int v){
    if (u == v) return false;
    if(sz[u] < sz[v]) swap(u,v); /// Ranking or Small to large trick
    par[v] = u;
    sz[u] += sz[v];
    return true;
}
int main(){
    freopen("DisjointSet.txt", "r", stdin);
    int node, edge;
    cin >> node >> edge;

    for(int i = 0; i < edge; i++){
        par[i] = i;
        sz[i] = 1;
    }

    int components = node;

    for(int i =0; i < edge; i++){
        int u, v;
        cin >> u >> v;
        u = Find(u);
        v = Find(v);
        if(Union(u, v)){
            cout << "No of components:" << --components << "\n";
        }else{
            cout << "No of components:" << components << "\n";
        }
    }
}
