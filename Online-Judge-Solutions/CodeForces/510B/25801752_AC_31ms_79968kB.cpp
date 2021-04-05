#include <bits/stdc++.h>
using namespace std;
const int N = 2500+5;
int ro, co;
char grid[N][N];
int vis[N][N];
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};
bool flag = false;
int temp;

int px[N][N], py[N][N];

void dfs(int r, int c) {
    vis[r][c]=1;
    for(int k =0; k<4; k++) {
        int xx = r + dx[k];
        int yy = c + dy[k];
        if(xx >= 0 && xx < ro && yy >= 0 && yy < co && grid[r][c] == grid[xx][yy]) {
            if(vis[xx][yy]==0) {
                temp++;
                px[xx][yy] = r, py[xx][yy]=c;
                dfs(xx,yy);
            }else if(temp>=4 && (px[r][c]!=xx || py[r][c]!=yy)){
                flag=true;
            }
        }
    }
}

int main() {
    cin>>ro>>co;
    string str;
    for(int i=0; i<ro; i++) {
        cin>>str;
        for(int j=0; j<co; j++) {
            grid[i][j] = str[j];
        }
    }
    for(int i=0; i<ro; i++) {
        for(int j=0; j<co; j++) {
            if(vis[i][j]==0) {
                temp=1;
                dfs(i,j);
            }
        }
    }
    if(flag)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}

