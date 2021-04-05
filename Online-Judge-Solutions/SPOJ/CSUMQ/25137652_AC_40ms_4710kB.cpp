#include <bits/stdc++.h>
using namespace std;
int n ,q, x;
int l, r;
int main(){
    //freopen("input.txt", "r", stdin);
    cin>>n;
    int pref[n+1];
    pref[0] = 0;
    for(int i =1; i<=n; i++){
        cin>>x;
        pref[i] = pref[i-1]+x;
    }
    cin>>q;
    for(int i = 0; i<q; i++){
        cin>>l>>r;
        cout<<pref[r+1]- pref[l]<<"\n";
    }
}
