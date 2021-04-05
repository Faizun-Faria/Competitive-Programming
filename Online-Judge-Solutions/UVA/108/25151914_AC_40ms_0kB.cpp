#include <bits/stdc++.h>
using namespace std;
const int N = 101;
int rectangle[N][N];
int pref[N][N];
int mx = -128;
void checkMax(int x1, int y1, int x2, int y2){
    mx = max(mx, (pref[x2][y2] - pref[x1-1][y2] - pref[x2][y1-1] + pref[x1-1][y1-1]));
}


int main(){
    //freopen("input.txt", "r", stdin);
    int n,k;
    cin>>n;
    for (int i =1; i <= n; i++){
        for (int j =1; j<=n; j++){
           cin>>rectangle[i][j];
        }
    }
    for (int i =1; i <= n; i++){
        for (int j =1; j<=n; j++){
           pref[i][j] =rectangle[i][j]+ pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
        }
    }

    for (int i =1; i <= n; i++){
        for (int j =1; j<=n; j++){
           for (int k =i; k<=n; k++){
                for(int l=j; l<=n; l++){
                    checkMax(i,j,k,l);
                }
           }
        }

    }
    cout<<mx<<"\n";
}
