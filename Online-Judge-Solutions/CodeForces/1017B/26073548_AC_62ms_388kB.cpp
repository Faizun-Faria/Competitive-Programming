#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n;
    cin>>n;
    string a,b;
    ///b[x]a[x]
    int zz=0,zo=0,oz=0,oo=0;
    cin>>a; cin>>b;
    for(int i = 0; i < n; i++) {
        if(b[i]=='0' && a[i]=='0') zz++;
        else if(b[i]=='0' && a[i]=='1') zo++;
        else if(b[i]=='1' && a[i]=='0') oz++;
        else if(b[i]=='1' && a[i]=='1') oo++;
    }
    ll ans = (1ll*zz*zo)+(1ll*zz*oo)+(1ll*zo*oz);
    cout<<ans<<"\n";
}
