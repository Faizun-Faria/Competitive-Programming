#include <bits/stdc++.h>
using namespace std;

const int N = 11;
int placable[N][N];
char grid[N][N];
int start_col, start_row, end_col, end_row;
int d_col[] = {-1,-1,1,1,0,0,-1,1};
int d_row[] = {-1,1,-1,1,-1,1,0,0};
string mo[] = {"LD","LU","RD","RU","D","U","L","R"};
int vis[N][N];
queue<int> q_row,q_col;
string mov[N][N];
int par_r[N][N];
int par_c[N][N];
int depth[N][N];
vector<string>v;
void bfs(int row, int col) {
    for(int i=0; i<8; i++) {
        int cc = col+d_col[i];
        int rr = row+d_row[i];
        if(cc>=0 && rr>=0 && cc<8 && rr<8 && vis[rr][cc]==0) {
            vis[rr][cc]=1;
            mov[rr][cc] = mo[i];
            par_c[rr][cc] = col;
            par_r[rr][cc] = row;
            depth[rr][cc] = depth[row][col]+1;
            q_row.push(rr);
            q_col.push(cc);
        }
    }
    q_row.pop();
    q_col.pop();
    if(!q_row.empty())  bfs(q_row.front(),q_col.front());
}

int main() {
    string str1,str2;
    cin>>str1;
    cin>>str2;

    start_col = (int)str1[0] - (int)'a';
    start_row = (int)str1[1]-(int)'1';
    end_col = (int)str2[0] - (int)'a';
    end_row = (int)str2[1]-(int)'1';
    q_row.push(start_row);
    q_col.push(start_col);
    depth[start_row][start_col] = 0;
    vis[start_row][start_col]=1;
    bfs(start_row, start_col);
    int temp = depth[end_row][end_col];
    int a = end_row;
    int b = end_col;
    int t1,t2;
    while(temp--){
        v.push_back(mov[a][b]);
        t1 = par_r[a][b];
        t2 = par_c[a][b];
        a = t1;
        b = t2;
    }
    cout<<depth[end_row][end_col]<<"\n";
    for(int i=v.size()-1; i>=0; i--){
        cout<<v[i]<<"\n";
    }

}
