#include <bits/stdc++.h>
using namespace std;
int n, k, q;
const int N = 2e5+100;
int recipes[N];
int diff[N];
int pref[N];
int l, r, a=N+1, b=-1;
int main(){
    //freopen("input.txt", "r", stdin);
    cin>>n>>k>>q;
    for(int i =0; i<n; i++){
        cin>>l>>r;
        a = min(l, a);
        b = max(r, b);
        diff[l]++;
        diff[r+1]--;
    }
    for(int i = 1; i <N; i++){
        recipes[i]=recipes[i-1]+diff[i];
        pref[i]=pref[i-1];
        if(recipes[i]>=k) pref[i]++;
    }
    for(int i=0; i<q; i++){
        cin>>l>>r;
        cout<<pref[r]-pref[l-1]<<"\n";
    }
}
