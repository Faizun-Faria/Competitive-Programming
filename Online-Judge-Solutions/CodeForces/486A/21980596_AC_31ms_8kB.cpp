#include <bits/stdc++.h>
using namespace std;
int main(){
    long long l;
    cin >> l;
    long long n;
    if (l%2==0) n = (l/2);
    else n = -((l/2)+1);
    cout<<n;
return 0;
}