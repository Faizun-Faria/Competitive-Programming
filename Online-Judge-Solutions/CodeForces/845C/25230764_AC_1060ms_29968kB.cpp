#include <bits/stdc++.h>
using namespace std;
const int N = 4e5 + 100;
int L[N], R[N] , arr[N];
int main() {
    int n;
    cin >> n;
    set<int> all;
    map<int,int> Map;
    for(int i = 1; i <= n; i++) {
        cin >> L[i] >> R[i];
        all.insert(L[i]);
        all.insert(R[i]+1);
    }
    int id = 0;
    for(int x : all) {
        Map[x] = ++id;
    }
    for(int i = 1; i <= n; i++) {
        L[i] = Map[L[i]];
        R[i] = Map[R[i]+1]-1;

    }

    for(int i = 1; i <= n; i++) {
        arr[L[i]]++;
        arr[R[i]+1]--;
    }
    for(int i = 2; i <N; i++) {
        arr[i] += arr[i-1];
    }
    bool flag = true;
    for(int i = 1; i <N; i++) {
        if(arr[i]>=3){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}
