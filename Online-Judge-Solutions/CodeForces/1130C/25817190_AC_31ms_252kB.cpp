#include <bits/stdc++.h>
using namespace std;

const int N = 55;
char grid[N][N];
int vis[N][N];

vector <int> v;
int dx []= {0,1,0,-1};
int dy []= {1,0,-1,0};

vector <pair<int,int>> v1;
vector <pair<int,int>> v2;
int n, r1, c1, r2, c2;
int mn = 5005;

void dfs1(int row, int col) {
    vis[row][col] = 1;
    for(int i = 0; i < 4; i++) {
        int xx= row+dx[i], yy=col+dy[i];
        if(xx>=0 && xx<n && yy>=0 && yy<n && grid[xx][yy]=='0' && vis[xx][yy]==0){
            v1.push_back(make_pair(xx,yy));
            dfs1(xx,yy);
        }
    }
}

void dfs2(int row, int col) {
    vis[row][col] = 1;
    for(int i = 0; i < 4; i++) {
        int xx= row+dx[i], yy=col+dy[i];
        if(xx>=0 && xx<n && yy>=0 && yy<n && grid[xx][yy]=='0' && vis[xx][yy]==0){
            v2.push_back(make_pair(xx,yy));
            dfs2(xx,yy);
        }
    }
}

void cal(){
    for(int i=0; i<v1.size();i++){
        for(int j=0; j<v2.size(); j++){
            int r = (v1[i].first-v2[j].first)*(v1[i].first-v2[j].first);
            int c = (v1[i].second-v2[j].second)*(v1[i].second-v2[j].second);
            int sum = r+c;
            ///cout<<v1[i].first<<" "<<v1[i].second<<" --- "<<v2[j].first<<" "<<v2[j].second<<"\n";
            mn = min(mn, sum);
        }
    }
}
int main(){
    cin>>n>>r1>>c1>>r2>>c2;
    r1--,r2--,c1--,c2--;
    string str;
    for(int i=0; i<n; i++){
        cin>>str;
        for(int j=0; j<n; j++){
            grid[i][j]= str[j];
        }
    }
    v1.push_back(make_pair(r1,c1));
    dfs1(r1,c1);
    v2.push_back(make_pair(r2,c2));
    dfs2(r2,c2);
    cal();
    cout<<mn<<"\n";
    return 0;
}
