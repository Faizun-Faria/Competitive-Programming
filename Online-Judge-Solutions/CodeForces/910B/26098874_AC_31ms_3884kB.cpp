#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b;
    cin>>n>>a>>b;
    vector <int> v = {a,a,a,a,b,b};
    sort(v.begin(),v.end());
    int mn=1001;
    do{
        int t = n, ans = 1;
        for(int x : v) {
            if(x<=t){t-=x;}
            else {ans++; t=n; t-=x; }
        }
        mn = min(mn, ans);
    }while(next_permutation(v.begin(), v.end()));
    cout<<mn<<"\n";
    return 0;
}
