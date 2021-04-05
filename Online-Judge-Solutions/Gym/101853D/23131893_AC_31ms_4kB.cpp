#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;

    while(t--){
        cin>>n;
        int arr[n];
        int co=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]>0) co++;
        }
        cout<<co<<"\n";
    }
}
