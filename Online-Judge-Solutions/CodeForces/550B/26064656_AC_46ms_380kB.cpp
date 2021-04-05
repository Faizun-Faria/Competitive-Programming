#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n, l, r, x;
    cin>>n>>l>>r>>x;
    ll arr[n];
    for(int i=0; i<n; i++){cin>>arr[i];}
    ll ans=0;
    for(int i=0; i<(1<<n); i++){
        ll sum =0;
        vector <ll> v;
        for(int j=0; j<n; j++){
            if((i>>j)&1) {
                sum+=arr[j];
                v.push_back(arr[j]);
            }

        }
        if(v.size()>=2){
            sort(v.begin(), v.end());
            if(sum>=l && sum<=r &&  (v[v.size()-1]-v[0])>=x) ans++;
        }

    }
    cout<<ans<<"\n";
}
