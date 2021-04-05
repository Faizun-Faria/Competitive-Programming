#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int testCase;
    cin>>testCase;
    ll maxim =-1;
    int maxInd = -1;
    ll arr[testCase];
    for(int i=0; i< testCase; i++){
        ll x;
        cin>>x;
        arr[i]=x;
        if(arr[i]>maxim) {
                maxim = arr[i];
                maxInd = i+1;
        }
    }
    int count1=0;
    for(int i=0; i< testCase; i++){
        if(arr[i]==maxim) {
                count1++;
        }
    }
    if((count1<2)) cout<<maxInd<<endl;
    else cout<<-1<<endl;
    return 0;
}
