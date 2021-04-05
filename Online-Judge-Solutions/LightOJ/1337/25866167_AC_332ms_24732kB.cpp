#include <bits/stdc++.h>
using namespace std;

const int N= 505;
char grid [N][N];
int crystal;
int vis[N][N];
int num[N][N];
int CRYST[N*N];
int test, row, col, query;
int dx[]= {0,0,-1,1};
int dy[]= {1,-1,0,0};

void dfs(int x, int y, int NN){
    if(grid[x][y]=='C') crystal++;
    vis[x][y]=1;
    num[x][y]=NN;
    for(int i=0; i<4; i++){
        int xx = x+dx[i];
        int yy = y+dy[i];
        if(xx>=0&&xx<row&&yy>=0&&yy<col&&grid[xx][yy]!='#'){
            if(vis[xx][yy]==0){
                dfs(xx,yy,NN );
            }
        }
    }
}

int main(){
    
    scanf("%d", &test);
    for(int i=1; i<=test; i++){
        scanf("%d%d%d", &row, &col, &query);
        for(int j=0; j<row; j++){
            char str[N];
            scanf("%s", str);
            for(int k=0; k<col; k++){
                grid[j][k]= str[k];
            }
        }

        crystal = 0;
        int COU = 0;
        for(int j=0; j<row; j++){
            for(int k=0; k<col; k++){
                if(vis[j][k]==0 &&  grid[j][k]!='#'){
                    dfs(j,k,COU);
                    CRYST[COU]=crystal;
                    COU++;
                    crystal = 0;
                }

            }

        }
        printf("Case %d:\n", i);

        for(int i=1; i<=query; i++){
            int a, b;
            cin>>a>>b;
            a--;
            b--;
            printf("%d\n", CRYST[num[a][b]]);
        }
        memset(CRYST,0,sizeof(CRYST));
        memset(num,0,sizeof(num));
        memset(vis,0,sizeof(vis));
        memset(grid,0,sizeof(grid));
    }
}