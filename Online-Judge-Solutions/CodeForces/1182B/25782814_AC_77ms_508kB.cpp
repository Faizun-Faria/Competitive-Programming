#include <bits/stdc++.h>
using namespace std;

const int N = 505;
char grid[N][N];

int main() {
    int n,m;
    cin>>n>>m;
    int star=0;
    int row=-1,col=-1;
    int co=0;


    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>grid[i][j];
            if( grid[i][j]=='*' )star++;
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if( i>0 && i<n-1 && j>0 && j<m-1 ){
                if(grid[i][j]=='*' && grid[i][j+1]=='*' && grid[i][j-1]=='*'&& grid[i+1][j]=='*' && grid[i-1][j]=='*'){
                    row=i,col=j;
                }
            }
        }
    }

    if(row==-1 && col==-1){
        cout<<"NO\n";
    }else{
        int r=row, c=col;
        while(grid[--r][col]=='*'){
            co++;
        }
        while(grid[row][--c]=='*'){
            co++;
        }
        r=row, c=col;
        while(grid[++r][col]=='*'){
            co++;
        }
        while(grid[row][++c]=='*'){
            co++;
        }
        if(++co==star) cout<<"YES\n";
        else cout<<"NO\n";
    }

}
