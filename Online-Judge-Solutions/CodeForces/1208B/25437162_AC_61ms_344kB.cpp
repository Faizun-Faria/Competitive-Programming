#include <bits/stdc++.h>
using namespace std;
const int N = 2e3+1;
int n,given[N],arr[N],hi,lo,mid,l,r,a[N];
set <int> st;
map <int,int> mp;
#define open freopen("input.txt", "r", stdin)
void input(){
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>given[i];
        st.insert(given[i]);
    }
}
void convertArray(){
    int e = 0;
    for(int i : st){
        mp[i] = e++;
    }
    for(int i =0; i<n; i++){
        arr[i] = mp[given[i]];
    }
    st.clear();
    mp.clear();
}
bool got(){
    l=0;
    r=mid;
    while(r<=n){
        for(int i=0; i<l; i++){
            a[arr[i]]++;
        }
        for(int i=r; i<n; i++){
            a[arr[i]]++;
        }
        bool dup = false;
        for(int i=0; i<n; i++){
            if(a[i]>1){
                dup  = true;
            }
        }
        memset(a,0,sizeof(a));
        if (!dup) return true;
        l++,r++;
    }
    return false;
}
int searchLength(){
    hi=n;
    lo=0;
    while(hi>lo){
        mid = (hi+lo)/2;
        if(got()){
            hi = mid;
        }else{
            lo = mid+1;
        }

    }
    return lo;
}
int main(){
    input();
    convertArray();
    int ans = searchLength();
    cout<<ans<<"\n";
}
