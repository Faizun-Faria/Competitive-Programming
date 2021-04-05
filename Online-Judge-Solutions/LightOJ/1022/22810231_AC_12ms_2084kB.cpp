#include <bits/stdc++.h>
using namespace std;
const double pi = 2*acos(0.0);
int main(){
	
    int tCase;
    cin>>tCase;
    for(int i=1; i<=tCase; i++){
        double r;
        cin>>r;
        double ans = (4.0*r*r)-(pi*r*r);
        printf("Case %d: %.2lf\n", i, ans);
    }

}