#include <bits/stdc++.h>
using namespace std;
#define open freopen("input.txt", "r", stdin)
#define ll long long int

int main(){
    int test,len;
    ll  order;
    cin>>test;
    while(test--){
        cin>>len>>order;
        string str = "";
        int a = len-2, b=2;
        for(int i=0; i<len; i++){
             str+='a';
        }
        ll total_comb, a_comb;
        int co=0;
        while(len){

            if(a>=2 && b>=2){
                total_comb = ((ll)len*((ll)len-1))/2;
                a_comb = (((ll)len-1)*((ll)len-2))/2;
            }else{
                a_comb = a;
            }

            if(order<=a_comb){
                a--;
            }else{
                order-=a_comb;
                b--;
                str[co]='b';
            }
            co++;
            len--;
        }

        cout<<str<<"\n";
    }
}
