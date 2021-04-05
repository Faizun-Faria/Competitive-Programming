#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 2e5+100;
int arr[N];
ll pref[N], suff[N];
int n,pos,j;
bool searchNum(ll num){
    while(suff[j]>num && j<n){
        j++;
    }
    j--;
    if (suff[j+1]==num){
        return true;
    }
    return false;
}
int main() {
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        pref[i] = arr[i];
        suff[i] = arr[i];
        if(i>0){
            pref[i] += pref[i-1];
        }
    }
    for(int i=n-2; i>=0; i--){
        suff[i] += suff[i+1];
    }
    ll value = pref[n-1]/2;
    pos = upper_bound(pref, pref+n, value) - pref;
    bool flag = false;
    j = pos;
    for(int i=pos-1; i>=0; i--){
        if (searchNum(pref[i])){
            flag = true;
            cout<<pref[i];
            break;
        }
    }
    if(!flag){
        cout<<0<<"\n";
    }
}
