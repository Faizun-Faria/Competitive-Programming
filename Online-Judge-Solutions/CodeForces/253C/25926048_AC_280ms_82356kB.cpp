#include <bits/stdc++.h>
using namespace std;
const int N = 105;
const int N2 = 1e5 +10;
int dis[N][N2];
int vis[N][N2];

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int arr[N];
    // D U R L
    int dr[]={1,-1,0,0};
    int dc[]={0,0,1,-1};
    int n, r1, c1, r2, c2;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
        arr[i]++;
    }
    cin>>r1>>c1>>r2>>c2;
    queue<int>qr, qc;
    qr.push(r1);
    qc.push(c1);
    dis[r1][c1]=0;
    vis[r1][c1]=1;
    while(!qr.empty()){
        int r = qr.front();
        int c = qc.front();
        qr.pop();
        qc.pop();
        for(int i=0; i<4; i++){
            if(!((r==n && i==0)||(r==1 && i==1)||(c==arr[r]&& i==2)||(c==1 && i==3))){
                int rr = r + dr[i];
                int cc = c + dc[i];
                if(arr[rr]<cc) cc = arr[rr];
                if(vis[rr][cc]==0){
                    qr.push(rr);
                    qc.push(cc);
                    vis[rr][cc]=1;
                    dis[rr][cc]=dis[r][c]+1;
                }
            }
        }
    }
    cout<<dis[r2][c2]<<"\n";
}
