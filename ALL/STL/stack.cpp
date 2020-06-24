#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 100; int arr[N];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){cin>>arr[i];}
    stack <int> stk;
    for(int i=1; i<=n; i++){
        while(stk.size() > 0 && a[stk.top()] <= a[i]) stk.pop();
        if(stk.size() > 0){
            last[i] = stk.top();
        }else{
            last[i] = -1;
        }
        stk.push(i);
    }
    return 0;
}
