#include <bits/stdc++.h>
using namespace std;
const int N = 20;
int dx []= {0,1,0,-1};
int dy []= {1,0,-1,0};
int n,m;
int vis[N][N];
char grid[N][N];
int co;
void dfs(int row, int col) {
    vis[row][col] = 1;
    for(int i = 0; i < 4; i++) {
        int xx= col+dx[i], yy=row+dy[i];
        if(vis[yy][xx]==0 && xx>=0 && xx<m && yy>=0 && yy<n && grid[yy][xx]!='#'){
            co++;
            dfs(yy,xx);
        }
    }
}


int main(){
    int t;
    cin>>t;
    for(int l=1; l<=t; l++){
        co=0;
        memset(vis,0,sizeof(vis));
        cin>>m>>n;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='@'){
                    co++;
                    dfs(i,j);
                }
            }
        }

        cout<<"Case "<<l<<": "<<co<<"\n";
    }

}
