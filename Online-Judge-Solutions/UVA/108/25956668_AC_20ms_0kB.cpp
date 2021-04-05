#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int M[N][N],P[N][N];

int main(){
    int n;
    cin>>n;
    memset(M,0,sizeof(M));
    memset(P,0,sizeof(P));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>M[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            P[i][j] = M[i][j]+P[i-1][j]+P[i][j-1]-P[i-1][j-1];
        }
    }
    int ans = P[1][1];
    for(int i1=1; i1<=n; i1++){
        for(int j1=1; j1<=n; j1++){
            for(int i2=i1; i2<=n; i2++){
                for(int j2=j1; j2<=n; j2++){
                    int temp = P[i2][j2]-P[i1-1][j2]-P[i2][j1-1]+P[i1-1][j1-1];
                    ans = max(ans,temp);
                }
            }
        }
    }
    cout<<ans<<"\n";
}
