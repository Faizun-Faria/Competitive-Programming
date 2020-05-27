#include <bits/stdc++.h>
using namespace std;
const int N =15;
int row, col;
char pattern[N][N];
int moves[N][N];
int total[N][N];
vector<pair<int,int> > points;
vector <int> move_no;
queue<int> X,Y;
int dx[]= {1,1,2,2,-1,-1,-2,-2};
int dy[]= {2,-2,1,-1,2,-2,1,-1};
int vis[N][N];
int depth[N][N];


void print2(){
    for(int i=0; i<row; i++){
        for(int j=0;j<col; j++){
            cout<<depth[i][j]<<" ";
        }
        cout<<"\n";
    }
     cout<<"\n";
}
void bfs(int R, int C, int COU) {
    for(int i=0; i<8; i++) {
        int xx= R+dx[i];
        int yy= C+dy[i];
        if(xx>=0 && yy>=0 && xx<row && yy<col && vis[xx][yy]==0) {
            vis[xx][yy]=1;
            X.push(xx);
            Y.push(yy);
            depth[xx][yy]=depth[R][C]+1;
            if(depth[xx][yy]>COU) {
                depth[xx][yy]=0;
                COU=0;
                break;
            }
            total[xx][yy]++;
            moves[xx][yy]++;

        }
    }
    X.pop();
    Y.pop();

    if(X.empty() || COU==0){
         while(!X.empty()){
            X.pop();
            Y.pop();
         }
    }else{
        bfs(X.front(),Y.front(),COU);
    }
}
void print() {
    for(int j=0; j<row; j++) {
        for(int k = 0; k<col; k++) {
            cout<<total[j][k]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int j=0; j<row; j++) {
        for(int k = 0; k<col; k++) {
            cout<<moves[j][k]<<" ";
        }
        cout<<endl;
    }
}


int main() {
    freopen("input.txt", "r", stdin);
    int t;
    cin>>t;
    string str;
    for(int i=1; i<=t; i++) {
        cin>>row>>col;
        for(int j=0; j<row; j++) {
            cin>>str;
            for(int k = 0; k<col; k++) {
                pattern[j][k]= str[k];
                if(pattern[j][k]!='.') {
                    total[j][k]++;
                    int num = (int)pattern[j][k] - (int)'0';
                    points.push_back(make_pair(j,k));
                    move_no.push_back(num);
                }
            }
        }

        for(int j=0; j<points.size(); j++) {
            int r= points[j].first;
            int c= points[j].second;
            int co = move_no[j];
            X.push(r);
            Y.push(c);
            depth[r][c] = 0;
            vis[r][c]=1;
            bfs(r,c,co);
            memset(depth,0,sizeof(depth));
            memset(vis,0,sizeof(vis));
        }
        print();
    }

}
