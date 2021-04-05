#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,t;
    cin>>n;
    set <int> s1,s2,s3;
    int arr[n];
    for(int i = 0; i < n; i++){cin>>arr[i];}
    for(int i = 0; i < n; i++){
        cin>>t;
        if(t==1)s1.insert(arr[i]);
        else if(t==2)s2.insert(arr[i]);
        else s3.insert(arr[i]);
    }
    for(int i = 0; i < n; i++){
        cin>>t;
        if(t==1)s1.insert(arr[i]);
        else if(t==2)s2.insert(arr[i]);
        else s3.insert(arr[i]);
    }

    cin>>m;
    vector <int> v;

    for(int i = 0; i < m; i++){
        cin>>t;
        int R = -1;
        if(t==1 && s1.size()>0){
            set<int>::iterator it1 = s1.begin();
            R = *it1;
        }
        else if(t==2 && s2.size()>0){
            set<int>::iterator it2 = s2.begin();
            R = *it2;
        }
        else if(t==3 && s3.size()>0){
            set<int>::iterator it3 = s3.begin();
            R = *it3;
        }
        v.push_back(R);
        s1.erase(R); s2.erase(R); s3.erase(R);
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}
