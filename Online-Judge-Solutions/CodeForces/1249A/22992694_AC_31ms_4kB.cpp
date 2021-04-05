#include <bits//stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;


    for(int i=0; i<t; i++){

        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
        sort(arr, arr+n);
        int co=1;
        for(int j=0; j<n-1; j++){
                if(((arr[j+1]-arr[j])==0)||((arr[j+1]-arr[j])==1)){
                co=2;
                break;
                }
        }
        cout<<co<<"\n";
    }
    return 0;
}
