#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 100;
int n, k, lo =1, hi;
int pref[N];

bool ok(int x) {
    int i = 0;
    int j = x-1;
    while(j < n){
        int r;
        if(i==0)    r = x - (pref[j] - 0);
        else    r = x - (pref[j] - pref[i-1]);
        if(min(r, x-r ) <= k) return true;
        j++;
        i++;
    }
    return false;
}

int main(){
    //freopen("input.txt", "r", stdin);
    cin>>n>>k;
    hi = n;
    string str;
    cin>>str;


    if (str[0]=='a')  pref[0] = 1;
    else  pref[0] = 0;
    for(int i=1; i<n; i++){
        pref[i] = pref[i-1];
        if (str[i]=='a'){
            pref[i] += 1;
        }
    }

     while(hi > lo) {
        int mid = (hi+lo+1)/2;
        if(ok(mid)){
            lo = mid;
        }
        else{
            hi = mid-1;
        }
    }
    cout<<lo<<"\n";
}
