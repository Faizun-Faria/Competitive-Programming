#include <bits/stdc++.h>
using namespace std;
#define open freopen("input.txt", "r", stdin)
#define ll long long int

int main(){
    ll test, len, order;
    cin>>test;
    while(test--){
        cin>>len>>order;
        string str = "";
        int a = len-2, b=2;
        for(int i=0; i<len; i++){
             str+='a';
        }
        ll total_comb, a_comb, b_comb;
        int co=0;
        while(len){

            if(a>=2 && b>=2){
                total_comb = (len*(len-1))/2;
                a_comb = ((len-1)*(len-2))/2;
                b_comb = total_comb-a_comb;
            }else{
                a_comb = a;
                b_comb = b;
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
