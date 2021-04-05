#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  int a,b;
    ll n=1;
    cin>>a>>b;
    if(a>b)swap(a,b);
    for(int i=1; i<=a;i++){
        n*=i;
    }
    cout<<n<<endl;
    return 0;
}
