#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 22;
ll par[N][N][N],pref[N][N][N];
int main() {
    int t;
    cin>>t;
    for(int w=1; w<=t; w++) {
        int a,b,c;
        cin>>a>>b>>c;
        memset(par,0,sizeof(par));
        memset(pref,0,sizeof(pref));
        for(int i=1; i<=a; i++) {
            for(int j=1; j<=b; j++) {
                for(int k=1; k<=c; k++) {
                    cin>>par[i][j][k];
                }
            }
        }
        for(int i=1; i<=a; i++) {
            for(int j=1; j<=b; j++) {
                for(int k=1; k<=c; k++) {
                    pref[i][j][k]=par[i][j][k]+pref[i-1][j][k]+pref[i][j-1][k]+pref[i][j][k-1]-pref[i-1][j-1][k]-pref[i-1][j][k-1]-pref[i][j-1][k-1]+pref[i-1][j-1][k-1];
                }
            }
        }
        ll mx = par[1][1][1];
        for(int i1=1; i1<=a; i1++) {
            for(int j1=1; j1<=b; j1++) {
                for(int k1=1; k1<=c; k1++) {
                    for(int i2=i1; i2<=a; i2++) {
                        for(int j2=j1; j2<=b; j2++) {
                                for(int k2=k1; k2<=c; k2++) {
                                      ll temp = pref[i2][j2][k2]-pref[i1-1][j2][k2]-pref[i2][j1-1][k2]-pref[i2][j2][k1-1]+pref[i1-1][j1-1][k2]+pref[i1-1][j2][k1-1]+pref[i2][j1-1][k1-1]-pref[i1-1][j1-1][k1-1];
                                      mx = max(mx,temp);
                                }
                        }
                    }
                }
            }
        }
        cout<<mx<<"\n";
        if(w!=t) cout<<endl;
    }
}
