#include <bits/stdc++.h>
using namespace std;
int n, k, x;
int hi,lo;
bool ok(int mid){
    int a = mid,b = mid;
    while (a>0){
        a/=k;
        b+=a;
    }
    if(b>=n) return true;
    return false;

}
int main(){
    cin>>n>>k;
    x = (n*(k-1))/k;
    hi = n;
    lo = x;
     while(hi > lo) {
        int mid = (hi+lo)/2;
        if(ok(mid)) hi = mid;
        else lo = mid+1;

    }
    cout<<hi<<"\n";
}
