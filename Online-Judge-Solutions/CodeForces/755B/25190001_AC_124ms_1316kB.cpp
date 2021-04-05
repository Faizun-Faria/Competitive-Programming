#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    map <string, int> mp;
    string str;
    int co=0;
    for(int i=0; i<a; i++){
        cin>>str;
        mp[str]++;
    }
    for(int i=0; i<b; i++){
        cin>>str;
        mp[str]++;
        if(mp[str]==2){
            co++;
        }
    }
    int n1 = (ceil(1.0*co/2))+(a-co);
    int n2 = (co/2)+(b-co);
    if(n1>n2)   cout<<"YES\n";
    else cout<<"NO\n";
}
