#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, cnt = 0;
    cin>>n>>m;
    string str;
    map <string,int> mp;
    mp.clear();
    set<string>st;
    for(int i=0; i<n; i++){
        cin>>str;
        mp[str]++;
        st.insert(str);
    }
    for(int i=0; i<m; i++){
        cin>>str;
        mp[str]++;
        st.insert(str);
        if(mp[str]==2) cnt++;
    }
    n-=cnt; m-=cnt;
    if((cnt%2==1 && n>=m)||(cnt%2==0 && n>m))cout<<"YES\n";
    else cout<<"NO\n";
}
