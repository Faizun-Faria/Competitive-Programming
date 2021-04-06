#include <bits/stdc++.h>
using namespace std;

void findUnique(int arr [], int l){
    map<int, int> val;
    for(int i = 0; i <l; i++){
        val[arr[i]]+=1;
    }
    map <int, int>::iterator it;
    for(it = val.begin();it!=val.end(); it++){
        if(it->second==1)cout<<it->first<<endl;
    }
}

int main(){
    int arr []= {1,2,3,45,62,3,4,5,1,1,2,2,2,2};
    int l = sizeof(arr)/sizeof(arr[0]);
    findUnique(arr,l);
}
