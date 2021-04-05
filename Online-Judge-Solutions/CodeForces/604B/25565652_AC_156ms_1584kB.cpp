#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int n,k;
    ll temp;
    cin>>n>>k;
    int l = n-k, r = k;
    vector <ll> Left;
    vector <ll> Final;
    for(int i=0; i<l; i++){
        cin>>temp;
        Left.push_back(temp);
    }
    for(int i=0; i<r; i++){
        cin>>temp;
        Final.push_back(temp);
        if(i<l) Final[i]+=Left[l-1-i];
    }
    sort(Final.begin(), Final.end(), greater<int>() );
    cout<<Final[0]<<"\n";
}
