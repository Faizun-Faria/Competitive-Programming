#include <bits/stdc++.h>
using namespace std;

const int N = 11;

int dx[] = {0,0,1,-1};
int dy[] = {-1,1,0,0};

bool grid[N][N];
string board[N];
int n;

int bfs(){
    vector<vector<int>> vis(n, vector<int>(n)), dis = vis;
    queue<int> que;
    que.push(sx);
    que.push(sy);
    vis[sx][sy] = true;
    while(que.size() > 0){
        int x = que.front(); que.pop();
        int y = que.front(); que.pop();
        for(int k=0; k<4; k++){
            int xx = x + dx[k], yy = y + dy[k];
            if(xx >=0 && xx < n && yy >= 0 && yy < n && vis[xx][yy] == 0 && grid[xx][yy] == true){
                vis[xx][yy] = true;
                dis[xx][yy] = dis[xx][yy]+1;
                que.push(xx);
                que.push(yy);
            }
        }
    }
    if(vis[tx][ty]) return dis[tx][ty];
    return -1;

}
int main(){
    int tc, caseno = 1;
    scanf("%d" , &tc);
    while(tc--){
        int n;
        scanf("%d", &n);
        memset(grid,0,sizeof grid);
        for(int i = 0; i < n; i++){
            char str[N];
            scanf("%s", str);
            string s(str);
            board[i] = s;
            for(int j = 0; j < n; j++){
                if(str[j] == '.') grid[i][j] = true;
            }
        }
        vector<pair<int,int>> let_pos;
        for(char ch = 'A'; ch <= 'Z'; ch++){
            int x = -1, y = -1;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(board[i][j] == ch){
                        x = i, y = j;
                    }
                }
            }
            if(x == -1)break;
            let_pos.push_back({x,y}); ///vector pair insert
        }
        bool can = true;
        int ans = 0;
        for(int i =0; i+1 < let_pos.size(); i++){
            int sx =let_pos[i].first, sy = let_pos[i].second;
        }
    }
    return 0;

}
