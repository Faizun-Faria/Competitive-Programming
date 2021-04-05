#include <bits/stdc++.h>
using namespace std;
const int mx = 1e6 +100;
int main(){
    ///freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, x, y;
    cin>>n>>m;
    set <int> st;
    vector <int> v;
    for(int i=0; i<m; i++){
        cin>>x>>y;
        if(x==1) {
            st.insert(y);
        }
        else {
            int z = -1;
            if(st.size()>0){
                auto it = st.lower_bound(y);
                if(*it>=y) z = *it;
            }
            v.push_back(z);
        }
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<"\n";
    }
}
