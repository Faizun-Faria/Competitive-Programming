#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e5 + 100;
ll n,s,sum,arr[N],a[N],ans;
bool flag = false;

void constructArr(ll num){
    memset(a, 0 , n);
    sum=0;
    for(int i=0; i<n; i++){
        a[i] = arr[i] +  ((ll)(1+i)*num);
    }
    sort(a,a+n);
    for(int i=0; i<num; i++){
        sum+=a[i];
    }
}

bool ok(){
    if(sum<=s){
        ans = sum;
        flag = true;
        return true;
    }else{
        return false;
    }
}
int main(){
    cin>>n>>s;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int hi = n;
    int lo = 0;
    while(hi>lo){
        int mid = (hi+lo+1)/2;
        constructArr(mid);
        if(ok()){
            lo = mid;
        }else {
            hi = mid-1;
        }
    }
    if(lo==0) cout<<lo<<" "<<ans<<"\n";
    else cout<<lo<<" "<<ans<<"\n";
}
