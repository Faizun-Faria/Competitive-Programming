#include <bits/stdc++.h>
using namespace std;

const int N = 2005;

bool vis[N][N];
int dis[N][N];

int dx[] = {0,0,+1,-1};
int dy[] = {+1,-1,0,0};

int main() {

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    int n, m, fires;
    cin >> n >> m >> fires;

    queue<int> que;
    while(fires--) {
        int x, y;
        cin >> x >> y;
        vis[x][y] = true;
        que.push(x);
        que.push(y);
        dis[x][y] = 0;
    }

    while(!que.empty()) {
        int x = que.front(); que.pop();
        int y = que.front(); que.pop();

        for(int k = 0; k < 4; k++) {
            int xx = x+dx[k], yy = y+dy[k];
            if(xx >= 1 && xx <= n && yy >= 1 && yy <= m && vis[xx][yy] == false) {
                que.push(xx);
                que.push(yy);
                vis[xx][yy] = true;
                dis[xx][yy] = dis[x][y] + 1;
            }
        }
    }

    int ans = -1, x = -1, y = -1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(dis[i][j] > ans) {
                ans = dis[i][j];
                x = i, y = j;
            }
        }
    }
    cout << x << " " << y << endl;

    return 0;
}
