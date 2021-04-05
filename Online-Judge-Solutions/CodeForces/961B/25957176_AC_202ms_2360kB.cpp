#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 2e5+100;
int a[N],t[N],d[N];

int main(){
    ll ans=0;
    int n, k;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=n; i++){
        cin>>t[i];
        d[i]=d[i-1];
        if(!t[i]){
            d[i]+=a[i];
            d[i+k]-=a[i];
        }else{
            ans+=a[i];
        }
    }
    ll mx = 0;
    for(int i = k; i<=n; i++){
        ll temp = d[i]-d[i-k];
        mx = max(mx,temp);
    }
    ans+=mx;
    cout<<ans<<endl;
}
