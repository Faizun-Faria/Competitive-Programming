#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }
    int a,b;
    cin>>a >>b;
    a-=1;
    b-=1;
    int total=0;
    for(int i=a; i<b; i++){
        total+=arr[i];
    }
    cout<<total<<endl;
return 0;
}
