#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int checkBit(ll mask, int s){
    return ((mask>>s)&1);
}
int main(){
    ll l,r, index=-1;
    cin>>l>>r;
    for(int i = 0; i < 64; i++) {
        int left = checkBit(l,i);
        int right = checkBit(r,i);
        if(right==1 && left==0) index = i;
    }
    ll ans = 0;
    for(int i = index; i >=0; i--) {
        ans += (1ll<<i);
    }
    cout<<ans<<"\n";
}
