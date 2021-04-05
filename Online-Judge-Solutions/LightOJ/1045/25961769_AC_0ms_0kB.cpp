#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
#define ll long long int
double arr[N];

int main(){
    int t,n,b;
    cin>>t;
    double x=0;
    memset(arr,0,sizeof(arr));
    for(int j=1; j<=N; j++){
        x+=log(j);
        arr[j]=x;
    }
    for(int j=1; j<=t; j++){
        cin>>n>>b;
        double a = arr[n]/log(b);
        ll ans=(int)a;
        if(a-(int)a>0)ans++;
        if(n==0||n==1)ans=1;
        cout<<"Case "<<j<<": "<<ans<<"\n";
    }
}
