#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n;
    vector <int> v;
    for(int i=0; i<n; i++){
        cin>>t;
        v.push_back(t);
    }
    bool flag = false;
    for(int i=0; i<(1<<n); i++){
        int num = i;
        int sum =0;
        for(int j=0; j<n; j++){
            if(((i>>j)&1)== 1) sum+=v[j];
            else sum-=v[j];
        }
        if(abs(sum)%360==0) {
            flag = true;
            break;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
