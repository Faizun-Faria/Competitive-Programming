#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        set <ll> st;
        st.clear();
        map <ll,int> mp;
        mp.clear();
        ll left = 1;
        ll right = n;
        st.insert(0);
        while(left<=right){
            if(mp[right]==0){
                mp[right]++;
                st.insert(left);
                st.insert(right);
            }
            left++;
            right=n/left;
        }
        cout<<st.size()<<"\n";
        for(int x : st){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
