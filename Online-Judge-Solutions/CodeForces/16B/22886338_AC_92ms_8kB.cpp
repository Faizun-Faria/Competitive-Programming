#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
vector <pair <int, int>> v;
int n1,n2;
for(int i=0; i<m; i++){
    cin>>n1>>n2;
    v.push_back(make_pair(n2,n1));

}

    sort(v.begin(), v.end());
    int total=0;
    for(int i=m-1; i>=0; i--){
        if(v[i].second<=n){
            n-=v[i].second;
            total+=(v[i].second*v[i].first);
        }

        else{
            total+=(n*v[i].first);
            break;
        }
    }
    cout<<total<<endl;
return 0;
}

