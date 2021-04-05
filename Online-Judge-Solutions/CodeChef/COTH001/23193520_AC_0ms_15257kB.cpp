#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long int a,b,ans, ans2;
    while (t--){
        cin>>a>>b;
        ans = b%a;
        ans2 = (a - ans)%a;
        cout<<ans2<<"\n";
    }
}