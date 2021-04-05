#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,T,temp;
    vector <int> t;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        t.push_back(temp);
    }
    cin>>T;
    sort(t.rbegin(), t.rend());
    int mx = 1;
    int co;
    for(int i=0; i<n-1; i++){
        co=1;
        for(int j=i+1;j<n; j++ ){
            if((t[i]-t[j])<=T){
                co++;
            }else break;
        }
        if(co>mx) mx = co;
    }
    cout<<mx<<"\n";

}
