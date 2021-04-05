#include <bits/stdc++.h>
using namespace std;
const int N = 12;
int R,C;
int mov[N][N];
int num[N][N];

void bfs(int r, int c, int divi){
    int vis[N][N];
    int dis[N][N];
    memset(vis, 0, sizeof(vis));
    memset(dis, 0, sizeof(dis));
    queue <int> q;
    int dr[] ={1,1,2,2,-1,-1,-2,-2};
    int dc[] ={2,-2,1,-1,2,-2,1,-1};
    vis[r][c] = 1;
    q.push(r);
    q.push(c);
    while(!q.empty()){
        r = q.front();
        q.pop();
        c = q.front();
        q.pop();
        for(int i=0; i<8; i++){
            int rr = r+dr[i];
            int cc = c+dc[i];
            if(rr>=0 && cc>=0 && rr<R && cc<C && vis[rr][cc]==0){
                q.push(rr);
                q.push(cc);
                dis[rr][cc]=dis[r][c]+1;
                num[rr][cc]++;
                mov[rr][cc]+=((dis[rr][cc]+divi-1)/divi);
                vis[rr][cc]=1;
            }

        }

    }
}


int main() {
    int t;
    string str;
    cin>>t;
    for(int i=1; i<=t; i++) {
        memset(num, 0, sizeof(num));
        memset(mov, 0, sizeof(mov));
        cin>>R>>C;
        int D[R][C];
        memset(D, 0, sizeof(D));
        vector <pair<int,int>> point;
        for(int j=0; j<R; j++){
            cin>>str;
            for(int k=0; k<C; k++){
                if(str[k]!='.'){
                    D[j][k] =(int)str[k] - (int)'0';
                    num[j][k]++;
                    point.push_back(make_pair(j,k));
                }
            }
        }
        for(int j=0; j<point.size(); j++){
            bfs(point[j].first, point[j].second, D[point[j].first][point[j].second]);
        }

        int mn = 1000000;
        bool poss = false;
        for(int j=0; j<R; j++){
            for(int k=0; k<C; k++){
                if(mov[j][k]<mn && num[j][k]==point.size()) {
                    mn=mov[j][k];
                    poss = true;
                }
            }
        }
        if(poss){
            cout<<"Case "<<i<<": "<<mn<<"\n";
        }else{
            cout<<"Case "<<i<<": "<<"-1"<<"\n";
        }


    }
}

