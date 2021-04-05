#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    int k1, k2;
    cin>>k1;
    deque <int> d1;
    deque <int> d2;
    for(int i=0; i<k1; i++){
        cin>>x;
        d1.push_back(x);
    }
    cin>>k2;
    for(int i=0; i<k2; i++){
        cin>>x;
        d2.push_back(x);
    }
    int nn=0;
     while(true){
        if(d1.size()==0){
            cout<<nn<<" "<<2<<"\n";
            break;
        }else if(d2.size()==0){
            cout<<nn<<" "<<1<<"\n";
            break;
        }else if(nn>100000){
            cout<<"-1";
            break;
        }
        if(d1.front()>d2.front()){
            d1.push_back(d2.front());
            d1.push_back(d1.front());
            d1.pop_front();
            d2.pop_front();
        }else{
            d2.push_back(d1.front());
            d2.push_back(d2.front());
            d1.pop_front();
            d2.pop_front();
        }
        nn++;
    }
}