#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,r;
    cin>>n>>l>>r;
    int arrA[n];
    int arrB[n];
    for(int i=0; i<n; i++){
        cin>>arrA[i];
    }
    for(int i=0; i<n; i++){
        cin>>arrB[i];
    }
    bool flag1 = true;
    for(int i=0; i<l-1;i++){
        if(arrA[i]!=arrB[i]) {
            flag1 = false;
            break;
        }
    }

    bool flag2 = true;
    for(int i=r; i<n;i++){
        if(arrA[i]!=arrB[i]) {
            flag2 = false;
            break;
        }
    }
    if(flag1 && flag2) {
        cout<<"TRUTH"<<endl;
    }else cout<<"LIE"<<endl;

return 0;
}

