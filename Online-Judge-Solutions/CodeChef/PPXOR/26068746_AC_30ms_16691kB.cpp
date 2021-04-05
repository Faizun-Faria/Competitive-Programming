#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int checkBit(int mask, int s){
    return ((mask>>s)&1);
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll arr[n],pref[n+1];
        ll ans = 0;
        for(int i=0; i<n; i++) {cin>>arr[i];}
        pref[0]=0;
        for(int i=0; i < n; i++) {pref[i+1]=pref[i]^arr[i]; }
        for(int i=0;i<30; i++){
            ll o=0,z=0;
            for(int j=0; j<=n; j++){
                if(checkBit(pref[j], i)) o++;
                else z++;
            }
            ans += o*z*(1<<i);
        }
        cout<<ans<<"\n";
    }
}
