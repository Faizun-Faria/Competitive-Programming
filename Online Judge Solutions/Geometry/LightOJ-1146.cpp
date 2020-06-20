#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,s,m,cntL,cntR,cntM;
vector <ll> L,R;

int main(){
    freopen("f1.txt","r", stdin);
    int t;
    cin>>t;

    while(t--){
        ll a,b,hi,lo,cnt=0;
        L.clear();
        R.clear();
        cin>>n>>s;
        ll l=1e9,r=0;
        vector<pair<ll,ll>> RL;
        for(int i=1; i<=n; i++){
            cin>>a>>b;
            if(a<l)l=a;
            if(b>r)r=b;
            L.push_back(a);
            R.push_back(b);
            RL.push_back(make_pair(b,a));
        }
        sort(RL.begin(), RL.end());
        hi=r; lo= l;
        while(hi>lo){
            cout<<hi<<" "<<lo<<"\n";
            ll cnt=0;
            int mid = (hi+lo)/2;
            for(int i=1; i<=n; i++){
                if((R[i]>=mid && L[i]<=mid)||(L[i]>mid)){
                    cnt++;
                }
            }
            if(cnt>=(n+1)/2){
                hi=mid;
            }else{
                lo = mid+1;
            }
        }
        cout<<hi<<"\n";
    }
}
