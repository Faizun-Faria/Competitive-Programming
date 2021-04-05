#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int n,m;
ll toDecimal(string s) {
    ll a=0;
    for(ll i=0, j= m-1; i<m; i++,j--) {
        if(s[j]=='1') {
            a+=(1LL<<i);
        }
    }
    return a;
}
void toBinary(ll aa){
    vector<int> v;
    ll de=aa;
    int cnt=0;
    while(de>0){
        v.push_back(de%2);
        de/=2;
        cnt++;
    }
    for(int i=0; i<m-cnt; i++){
        cout<<0;
    }
    for(int i=v.size()-1; i>=0; i--){
        cout<<v[i];
    }
    cout<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        priority_queue <ll,vector<ll>, greater<ll>> q;
        cin>>n>>m;
        string str;
        for(int i=0; i<n; i++){
            cin>>str;
            q.push(toDecimal(str));
        }

        ll mid = ((1LL<<m)-n-1)/2;
        for(int i=0; i<n; i++){
            if(q.top()<=mid){
                mid++;
                q.pop();
            }
            else break;
        }
        toBinary(mid);
    }
}
