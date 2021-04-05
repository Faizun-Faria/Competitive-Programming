#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    ll sum=0;
    for(int i =1; i<n; i++ ) {
            sum+=(arr[i]*i);

    }
    cout<<sum<<"\n";
}

