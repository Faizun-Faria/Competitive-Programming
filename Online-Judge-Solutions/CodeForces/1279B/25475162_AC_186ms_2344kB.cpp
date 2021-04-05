#include <bits/stdc++.h>
using namespace std;
#define open  freopen("input.txt", "r", stdin)
#define ll long long int

int main() {
    int n,t;
    cin>>t;
    ll s;
    while(t--){
        bool flag = false;
        cin>>n>>s;
        ll a[n],cumu[n];
        ll mxx, mx[n];
        cin>>a[0];
        cumu[0] = a[0];
        mxx = (int)a[0];
        mx[0] = mxx;
        int ind =0;
        for(int i=1; i<n; i++){
            cin>>a[i];
            cumu[i] = (a[i]+cumu[i-1]);
            if(a[i]>mxx){
                mxx = a[i];
            }
            mx[i] = mxx;

            if(((cumu[i]-mx[i])>s)&&(flag==false)){
                flag = true;
                ind = i-1;
            }
        }
        if(flag){
            int pos = lower_bound(mx, mx+n, mx[ind])-mx;
            cout<<(pos+1)<<"\n";
        }else if(cumu[n-1]<=s){
            cout<<0<<"\n";
        }else{
            int pos = lower_bound(mx, mx+n, mxx)-mx;
            cout<<(pos+1)<<"\n";
        }

    }
}