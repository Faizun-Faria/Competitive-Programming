#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int testCase;
    cin>>testCase;
    for(int i=0; i< testCase; i++){
        ll a,b;
        cin>>a>>b;
        ll c = __gcd(a,b);
        if(c>1) cout<<"Sim"<<endl;
        else cout<<"Nao"<<endl;
    }
    return 0;
}
