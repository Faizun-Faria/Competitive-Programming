#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb(v,num) v.push_back(num)
vector <ll> d;
#define open freopen("input.txt", "r", stdin)
void divisors(ll x){
    for(int i=1; i*i<=x; i++){
        if(x%i==0){
            pb(d,i);
            if((x/i)!=i) pb(d, (x/i));
        }
    }
    sort(d.begin(), d.end());
}
int main(){
    ll c,r,n, temp, n1,n2,ans=0;
    cin>>c>>r>>n;
    divisors(n);
    vector <ll> co,ro;
    pb(co,0);
    pb(ro,0);
    for(int i=1; i<=c; i++){
        cin>>temp;
        pb(co,temp);
        if(co[i]!=0) co[i]+=co[i-1];
    }
    for(int i=1; i<=r; i++){
        cin>>temp;
        pb(ro,temp);
        if(ro[i]!=0) ro[i]+=ro[i-1];
    }
    for(int i=0; i<d.size(); i++){
        int cou1=0, cou2=0;
        n1 = d[i];
        n2 = n/d[i];
        for(int j = n1; j<co.size(); j++){
            if((co[j]-co[j-n1])==n1){
                cou1++;
            }
        }
        for(int j = n2; j<ro.size(); j++){
            if((ro[j]-ro[j-n2])==n2){
                cou2++;
            }
        }
        ans += (cou1*cou2);
    }
    cout<<ans<<"\n";
}
