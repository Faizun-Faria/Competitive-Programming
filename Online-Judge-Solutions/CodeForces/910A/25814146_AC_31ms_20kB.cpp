#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    string str;
    cin>>n>>d;
    cin>>str;
    vector<int> v;
    for(int i=1; i<=n; i++){
        if(str[i-1]=='1'){
            v.push_back(i-1);
        }
    }
    int val = d;
    int co = 0;
    int prev =0;
    bool flag = false;
    while(true){
        int pos = upper_bound(v.begin(), v.end(), val)-v.begin();
        pos--;
        if(prev>=pos){
            flag = true;
            break;
        }
        prev=pos;
        co++;
        if(pos==v.size()-1) break;
        val=v[pos]+d;

    }

    if(flag) cout<<"-1\n";
    else cout<<co<<"\n";
}
