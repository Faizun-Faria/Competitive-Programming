
#include <bits/stdc++.h>
using namespace std;
const int N = 2005;
int n,given[N],arr[N];
set <int> all;
/// given an array of up to 2000 elements where each element can be up to 10^9
/// remake the array so that each element will be less or equal 2000
void convertArray(){
    map <int,int> mp;
    int id = 0;
    for(int i : all){
        mp[i] = id++;
    }
    for(int i =0; i<n; i++){
        arr[i] = mp[given[i]];
    }
}
int main(){
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>given[i];
        all.insert(given[i]);
    }
    convertArray();
    for(int i =0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
