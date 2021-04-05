#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int t, n, m;
int a[N], p[N];

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bsort(){
    bool swapped;
    for(int i=0; i<n-1; i++){
        swapped = false;
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1] && p[j]==1){
                swap(&a[j], &a[j+1]);
                swapped = true;
            }

        }
        if (swapped == false)
        break;

    }


}

int main(){
    int te;
    cin>>t;
    while(t--){
        cin>>n>>m;
        memset(p, 0, sizeof(p));
        memset(a, 0, sizeof(a));
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        memset(p, 0, sizeof(p));
        for(int i=0; i<m; i++){
            cin>>te;
            p[te-1] = 1;
        }

        bsort();
        bool flag = true;
        for(int i=0; i<n-1; i++){
            if(a[i]>a[i+1]) flag = false;
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
