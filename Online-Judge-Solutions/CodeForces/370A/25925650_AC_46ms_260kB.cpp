#include <bits/stdc++.h>
using namespace std;

int dr[]={1,-1,-1,1};
int dc[]={1,1,-1,-1};

int bishop(int r1,int c1, int r2, int c2){
    int vis[9][9];
    int dis[9][9];
    memset(vis, 0 , sizeof(vis));
    memset(dis, 0 , sizeof(dis));
    queue<int> qr,qc;
    qr.push(r1);
    qc.push(c1);
    vis[r1][c1]=1;
    dis[r1][c1]=0;
    while(!qr.empty()){
        int r = qr.front();
        int c = qc.front();
        qr.pop();
        qc.pop();
        for(int i=1; i<8; i++){
            for(int j=0; j<4; j++){
                int rr = r + (i*dr[j]);
                int cc = c + (i*dc[j]);
                if(rr>0 && cc>0 && rr<9 && cc<9 && vis[rr][cc]==0){
                    dis[rr][cc]=dis[r][c]+1;
                    vis[rr][cc]=1;
                    qr.push(rr);
                    qc.push(cc);
                }
            }
        }
    }
    return dis[r2][c2];
}


int rook(int r1,int c1, int r2, int c2){
    if(r1==r2 || c1==c2){
        return 1;
    }
    return 2;
}

int king(int r1,int c1, int r2, int c2){
    int rr = abs(r1-r2);
    int cc = abs(c1-c2);
    return max(rr,cc);
}


int main(){
    int r1, c1, r2, c2;
    cin>>r1>>c1>>r2>>c2;
    int RO = rook(r1, c1, r2, c2);
    int KI = king(r1, c1, r2, c2);
    int BI = bishop(r1, c1, r2, c2);
    cout<<RO<<" "<<BI<<" "<<KI<<"\n";
}
