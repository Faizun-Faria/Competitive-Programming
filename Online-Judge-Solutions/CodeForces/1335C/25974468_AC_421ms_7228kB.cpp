#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int arr[N];
int main(){
    set<int> st;
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        cin>>n;
        memset(arr,0,sizeof(arr));
        st.clear();
        int mx1 = 0;
        for(int i=0; i<n; i++){
            cin>>temp;
            arr[temp]++;
            if(arr[temp]>mx1) mx1 = arr[temp];
            st.insert(temp);
        }
        int mx2 = st.size();
        if(mx2<mx1) cout<<mx2<<"\n";
        else {
            mx2--;
            cout<<min(mx1,mx2)<<"\n";
        }

    }

}
