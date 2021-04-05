#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a,b;
    cin>>n>>a>>b;
    int cnt=0;
    for(int i=a+1; i<=n; i++){
        if((i-1>=a)&&(n-i<=b)) cnt++;
    }
    cout<<cnt<<endl;

}
