#include <bits/stdc++.h>
using namespace std;


const int N = 2e5 + 10;
int arr[N];
int vis[N];
int dis[N];
vector <int> G[N];


void bfs(int start){
    queue<int>q;
    q.push(start);
    vis[start] = 2;
    dis[start]=0;
    while(!q.empty()){
        int u = q.front();
        vis[u] = 2;
        q.pop();
        for(int i=0; i<G[u].size();i++){
            int v = G[u][i];
            if(vis[v]==0){
                vis[v] = 1;
                dis[v]= dis[u]+1;
                q.push(v);
                //cout<<"1st   u: "<<u<<"    v: "<<v<<"   dis[u]: "<<dis[u]<<"   dis[v]: "<<dis[v]<<"\n";
            }else if(vis[v]==1){
                if(dis[u]+1<dis[v]) dis[v]= dis[u]+1;
                //cout<<"2nd    u: "<<u<<"    v: "<<v<<"   dis[u]: "<<dis[u]<<"   dis[v]: "<<dis[v]<<"\n";
            }

        }
    }

}


int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++){
        if(i>1){
            G[i].push_back(i-1);
        }
        if(i<n){
            G[i].push_back(i+1);
        }
        if(i!=arr[i] ){
            G[i].push_back(arr[i]);
        }
    }
    for(int i=1; i<=n; i++){
        dis[i]= N+100;
    }
    bfs(1);
    for(int i=1; i<=n; i++){
        cout<<dis[i]<<" ";
    }

}
