#include <bits/stdc++.h>
using namespace std;
int people, p;
map <int,int> mp;
bool poss(int m){
    int total=0;
    for(int i=0; i<=100; i++){
        total+=(mp[i]/m);
    }
    if(total>=people) return true;
    return false;
}
int main(){
    cin>>people>>p;
    int pack[105];
    for(int i=0; i<p; i++){
        cin>>pack[i];
        mp[pack[i]]++;
    }
    int lo=0, hi=100;
    while(hi>lo){
        int mid = (hi+lo+1)/2;
        if(poss(mid)){
           lo = mid;
        }else{
            hi = mid-1;
        }
    }
    cout<<lo<<"\n";
}
