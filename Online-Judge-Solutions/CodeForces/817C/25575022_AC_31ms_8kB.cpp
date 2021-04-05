#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll sumOfDigit(ll n){
    ll su = 0;
    ll num = n;
    while(num>0){
        su+=(num%10);
        num/=10;
    }
    return su;
}

int main() {
    ll n, k, ans;
    cin>>n>>k;
    ll lo = k;
    ll hi = lo+180;
    for(ll i= lo; i<=hi; i++){
        ll dif = i-sumOfDigit(i);
        if(dif>=k) {
            ans = i;
            break;
        }
    }
    if(ans>n) cout<<0<<"\n";
    else cout<<(n-ans+1)<<"\n";
}
