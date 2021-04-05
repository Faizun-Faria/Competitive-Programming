#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int n, k;
string str[2];

string bfs(){
    int vis[2][N];
    int dis[2][N];
    int xx,yy;
    int dy[] = {1,-1, k};
    queue <int> qx;
    queue <int> qy;
    qx.push(0);
    qy.push(0);
    vis[0][0]=1;
    dis[0][0]=0;

    while(!qx.empty()){
        int x = qx.front();
        qx.pop();
        int y = qy.front();
        qy.pop();
        for(int i=0; i<3; i++){
            yy = y+dy[i];
            if (i == 2 ) xx = (x^1);
            else xx=x;
            if( xx==0 && yy>=0){
                if(yy<n && str[xx][yy]=='-' && vis[xx][yy]==0 && yy>=dis[x][y]+1){
                     vis[xx][yy]=1;
                 dis[xx][yy]= dis[x][y]+1;
                 qx.push(xx);
                 qy.push(yy);
                }else if(yy>=n){
                    return "YES";
                 }
            }else if( xx==1 && yy>=0 ){
                 if(yy<n && str[xx][yy]=='-' && vis[xx][yy]==0 && yy>=dis[x][y]+1){
                    vis[xx][yy]=1;
                    dis[xx][yy]= dis[x][y]+1;
                    qx.push(xx);
                    qy.push(yy);
                 }else if(yy>=n){
                    return "YES";
                 }
            }
        }
    }
    return "NO";
}
int main(){
    cin>>n>>k;
    cin>>str[0];
    cin>>str[1];
    string s = bfs();
    cout<<s<<"\n";
}
