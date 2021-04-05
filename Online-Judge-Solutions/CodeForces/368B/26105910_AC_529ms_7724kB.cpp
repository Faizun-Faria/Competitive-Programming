#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, t;
    cin>>n>>m;
    int arr[n], l[n];
    set <int> st;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=n-1; i>=0; i--){
        st.insert(arr[i]);
        l[i] = st.size();
    }
    for(int i=0; i<m; i++){
        cin>>t;
        cout<<l[t-1]<<"\n";
    }
}
