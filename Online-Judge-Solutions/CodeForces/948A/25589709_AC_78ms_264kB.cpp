#include <bits/stdc++.h>
using namespace std;
int r,c;
char arr[505][505];
bool flag= false;
void update(int ROW, int COL){
    int left = COL-1;
    int right = COL+1;
    int up = ROW-1;
    int down = ROW+1;
    if(left>=0){
        if(arr[ROW][left]=='.') arr[ROW][left]='D';
        else if(arr[ROW][left]=='S')flag = true;
    }
    if(right<c){
        if(arr[ROW][right]=='.') arr[ROW][right]='D';
        else if(arr[ROW][right]=='S')flag = true;
    }
    if(up>=0){
        if(arr[up][COL]=='.') arr[up][COL]='D';
        else if(arr[up][COL]=='S')flag = true;
    }
    if(down<r){
        if(arr[down][COL]=='.') arr[down][COL]='D';
        else if(arr[down][COL]=='S') flag = true;
    }
}


int main(){
    cin>>r>>c;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
           if(arr[i][j]=='W'){
                update(i,j);
           }
        }
    }
    if(flag){
        cout<<"NO\n";
    }
    else {
        cout<<"YES\n";
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cout<<arr[i][j];
            }
            cout<<"\n";
        }
        cout<<"\n";
    }

}
