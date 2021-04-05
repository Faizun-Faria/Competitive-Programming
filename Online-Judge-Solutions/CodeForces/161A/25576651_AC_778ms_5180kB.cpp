#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() {
    ll n, m, x, y, temp;
    cin>>n>>m>>x>>y;
    vector <ll> a,b;
    for(int i=0; i<n; i++){
        cin>>temp;
        a.push_back(temp-x);
    }
    for(int i=0; i<m; i++){
        cin>>temp;
        b.push_back(temp);
    }
    vector <pair<ll,ll>> ans;
    int j=0;
    for(int i=0; i<n; i++){
        while(b[j]<a[i] && j<m){
            j++;
        }
        if(j==m) break;
        if(((b[j])>=a[i])&&(b[j]<=(a[i]+x+y))){
            ans.push_back(make_pair(i+1,j+1));
            j++;
        }else{
            continue;
        }
    }
    ll SIZE = ans.size();
    cout<<SIZE<<"\n";
    for(int i=0; i<SIZE; i++){
        cout<<ans[i].first<<" "<<ans[i].second<<"\n";
    }

}