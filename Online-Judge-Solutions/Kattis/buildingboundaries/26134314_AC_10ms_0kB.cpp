#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 50;
ll A[N][3];
ll B[N][3];
ll AA[3],BB[3];

int checkBit(int mask, int s) {
    return (mask>>s)&1;
}

void all_possible() {
    int cnt = 0;
    for(int i = 0; i < 8; i++) {
        int num[3] = {checkBit(i,0),checkBit(i,1),checkBit(i,2)};
        vector <int> v = {0,1,2};
        do {
            int c = 0;
            for(int x : v) {
                if(num[c]==0) {
                    A[cnt][x]=AA[c];
                    B[cnt][x]=BB[c];
                } else {
                    A[cnt][x]=BB[c];
                    B[cnt][x]=AA[c];
                }
                c++;
            }
            cnt++;
        } while(next_permutation(v.begin(),v.end()));
    }
}
void print() {
    for(int i=0; i<50; i++) {
        cout<<A[i][0]<<" "<<B[i][0]<<" "<<A[i][1]<<" "<<B[i][1]<<" "<<A[i][2]<<" "<<B[i][2]<<"\n";
    }
}

int main() {
    //freopen("input.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--) {
        cin>>AA[0]>>BB[0]>>AA[1]>>BB[1]>>AA[2]>>BB[2];
        all_possible();
        ll mn = 5e18+10;
        ll X, Y;
        for(int i = 0; i < 48; i++) {
            if(A[i][0]>=A[i][2]) {
                X = A[i][0]+A[i][1];
                Y = max((B[i][0]+B[i][2]),B[i][1]);
            } else {
                X = max((A[i][0]+A[i][1]),A[i][2]);
                Y = max(B[i][0], B[i][1]) + B[i][2];
            }
            mn = min((X*Y),mn);
            X = A[i][0]+A[i][1]+A[i][2];
            Y = max(max(B[i][0],B[i][1]),B[i][2]);
            mn = min((X*Y),mn);
        }
        cout<<mn<<"\n";
    }
}