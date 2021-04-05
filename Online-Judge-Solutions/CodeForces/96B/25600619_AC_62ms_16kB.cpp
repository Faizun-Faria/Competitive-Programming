#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector <ll> all;
void allpossible(){
    for(int i=2; i<=10; i+=2){
        for(int j=0; j<(1<<i); j++){
            int temp = j;
            ll num = 0;
            ll po =1;
            int co0=0,co1=0;
            for(int k=0; k<i; k++){
                if((temp>>k & 1)==1){
                    num+=7*(po);
                    co1++;
                }
                else if((temp>>k & 1)==0){
                    num+=4*(po);
                    co0++;
                }
                po*=10;
            }
            if(co0==co1)    all.push_back(num);
        }
    }
}
int main(){
    ll input;
    cin>>input;
    allpossible();
    for(ll i= 0; i<all.size(); i++){
        if(all[i]>=input){
            cout<<all[i];
            break;
        }
    }
}
