#include <bits/stdc++.h>
using namespace std;
int x, y;

int main(){
    //freopen("input.txt","r", stdin);
    cin>>x>>y;
    char matrix[x][y];
    char ans[x][y];
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cin>>matrix[i][j];
            if(matrix[i][j]=='-') ans[i][j] = '-';
            else{
                if((i+j)%2==0) ans[i][j] = 'B';
                else ans[i][j] = 'W';
            }
        }
    }
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout<<ans[i][j];
        }
        cout<<"\n";
    }
}
