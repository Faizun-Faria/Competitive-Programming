#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int n;
        cin>>n;
        int arr[n],pref[n+1];
        ll ans = 0;
        for(int i=0; i<n; i++) {cin>>arr[i];}
        pref[0]=0;
        for(int i=0; i < n; i++) {pref[i+1]=pref[i]^arr[i]; }
        map <int, int> even, odd;
        set <int > e,o;
        e.clear(); o.clear(); even.clear(); odd.clear();
        for(int i=0; i <= n; i++) {
            if(i%2==0){even[pref[i]]++; e.insert(pref[i]);}
            else {odd[pref[i]]++; o.insert(pref[i]);}
        }
        for(int  i:e) {
            if(even[i]>1) ans += ((1ll*even[i])*(even[i]-1))/2;
        }
        for(int  i:o) {
            if(odd[i]>1) ans += ((1ll*odd[i])*(odd[i]-1))/2;
        }
        cout<<ans<<"\n";

}
