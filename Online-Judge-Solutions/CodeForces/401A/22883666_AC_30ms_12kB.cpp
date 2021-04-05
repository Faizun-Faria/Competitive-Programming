#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    int total = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        total+=arr[i];
    }
    if(total<0) total=-total;
    int num=0;
    if(total!=0){
        num= total/x;
    }
    if(total%x==0){
        cout<<num<<endl;
    }else {
        num++;
        cout<<num<<endl;
    }

return 0;
}
