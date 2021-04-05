#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long int a,b;
    while(t--){
        cin>>a>>b;
        if(__gcd(a,b)>1) cout<<"Sim"<<"\n";
        else cout<<"Nao"<<"\n";
    }
}