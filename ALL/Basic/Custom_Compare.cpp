#include <bits/stdc++.h>
using namespace std;
#define open freopen("input.txt", "r", stdin)
bool compare(pair<int,int>n1, pair<int, int>n2){
    if(n1.first>n2.first) return true;
    else if(n1.first==n2.first){
        if(n1.second<n2.second) return true;
    }
    return false;
}
int main(){
    int n,k,p,t;
    vector <pair<int,int>> pp;
    map <pair<int,int>, int> mp;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>p>>t;
        pp.push_back(make_pair(p,t));
        mp[pp[i]]++;
    }
    sort(pp.begin(), pp.end(), compare);
    cout<<mp[pp[k-1]]<<"\n";

}
