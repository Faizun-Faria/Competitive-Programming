#include <bits/stdc++.h>
using namespace std;
int main(){
    for (int i = 1; i <= 64; i++){
    int n = i;
    double ans = log2(n)/log2(2);
    int ans2 = (int) ans;
    double extra =  ans - 1.0*ans2;
    cout << n;
    if(extra == 0.0) cout << " Yes\n";
    else cout << " No\n";
    }
}
