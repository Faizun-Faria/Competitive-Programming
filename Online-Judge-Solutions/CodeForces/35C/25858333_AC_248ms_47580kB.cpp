#include <bits/stdc++.h>
using namespace std;

const int N = 2005;
int total_row,total_col;
int forest[N][N];
vector <pair<int,int>> F;
int d_row[] = {-1,1,0,0};
int d_col[] = {0,0,-1,1};
queue <int> q_r;
queue <int> q_c;
int vis[N][N];
int depth[N][N];
int mx = 0;
int x=0,y=0;

void bfs() {
    while(!q_r.empty()) {
        int row =q_r.front();
        int col = q_c.front();
        for(int i=0; i<4; i++) {
            int r = row+d_row[i];
            int c = col+d_col[i];
            if(r>=0 && c>=0 && r<total_row && c<total_col && vis[r][c]==0) {
                vis[r][c]=1;
                depth[r][c]=depth[row][col]+1;
                q_r.push(r);
                q_c.push(c);
            }
        }
        q_r.pop();
        q_c.pop();
    }


}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int total_fire,rr,cc;
    cin>>total_row>>total_col>>total_fire;

    while(total_fire--) {
        cin>>rr>>cc;
        F.push_back(make_pair(rr-1,cc-1));
    }
    for(int i=0; i<total_row; i++) {
        for(int j=0; j<total_col; j++) {
            depth[i][j]=2500;
        }
    }
    for(int i=0; i<F.size(); i++) {
        int rrr = F[i].first;
        int ccc = F[i].second;
        depth[rrr][ccc] = 0;
        q_r.push(rrr);
        q_c.push(ccc);
        vis[rrr][ccc]=1;
        depth[rrr][ccc]=0;
    }
    bfs();
    for(int i=0; i<total_row; i++){
        for(int j=0; j<total_col;j++){
            if(depth[i][j]>mx)  {
                 x = i;
                 y = j;
                 mx = depth[i][j];
            }
        }
    }
    cout<<(x+1)<<" "<<(y+1)<<"\n";
}
