#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define open freopen("input.txt", "r", stdin)

int main(){
    int q;
    ll ini, turn, a, b, hi,lo,mid;
    cin>>q;
    while(q--){
        cin>>ini>>turn>>a>>b;
        hi = turn; lo=0;
        while(hi>lo){
            mid=(hi+lo+1)/2;
            ll ans = (mid*a)+((turn-mid)*b);
            bool b1 = ans<ini;
            bool b2 = (ini-a)>(mid-1)*a;
            if(b1&&b2){
                lo = mid;
            }else{
                hi = mid-1;
            }
        }
        if((turn-mid-1)*b>(ini-b)){
            cout<<"-1"<<"\n";
        }else if(lo>0){
             cout<<lo<<"\n";
        }else if((turn*b>=ini)&&((turn-1)*b>=(ini-b))){
            cout<<-1<<"\n";
        }else{
            cout<<lo<<"\n";
        }

    }

}
