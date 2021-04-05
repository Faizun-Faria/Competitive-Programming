#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define open freopen("input.txt", "r", stdin)
int main(){
    vector <ll> input;
    int n;
    ll d, temp, ans=0, n1;
    cin>>n>>d;
    for(int i=0; i<n; i++){
        cin>>temp;
        input.push_back(temp);
    }
    for(int i=n-1; i>1; i--){
        ll value = input[i]-d;
        int pos = lower_bound(input.begin(), input.end(), value)-input.begin();
        if(pos==i-1 || pos==i) continue;
        n1 = i-pos;
        ans+= (n1*(n1-1)/2);

    }
    cout<<ans<<"\n";
}
