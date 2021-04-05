#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    int n,t;
    cin>>n;
    vector <int> r;
    for(int i=0; i<n; i++){
        cin>>t;
        r.push_back(t);
    }
    sort(r.begin(), r.end());
    int mx = 0;
    for(int i=0; i<n; i++){
        int right_limit = r[i]*2;
        int right_pos = upper_bound(r.begin(), r.end(), right_limit)- r.begin();
        right_pos--;
        int R_Len = right_pos-i+1;
        int co = R_Len;
        if(co>mx) mx = co;
    }
    cout<<(n-mx)<<"\n";
}
