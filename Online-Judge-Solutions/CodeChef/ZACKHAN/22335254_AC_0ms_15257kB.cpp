#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cin>>testCase;
    for(int i=0; i<testCase; i++){
        int a, b;
        cin>>a>>b;
        int c =__gcd(a,b);
        cout<<c<<endl;
    }
    return 0;
}
