#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, dead, r;
    cin>>t;
    while(t--){
        cin>>dead>>r;
        int n = ceil(2*sqrt(r))-1;
        if(n<=dead) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
