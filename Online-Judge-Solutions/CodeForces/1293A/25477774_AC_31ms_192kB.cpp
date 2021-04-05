#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define open freopen("input.txt","r", stdin)
const int N = 1e9;
map<ll,ll> closed;

int main(){
    ll t,floors, conne, c, temp;
    cin>>t;
    while(t--){
        cin>>floors>>conne>>c;
        for(int i=0; i<c; i++){
            cin>>temp;
            closed[temp]=1;
        }
        if (closed[conne]==0){
            cout<<"0\n";
        }else{
            ll ind1=N, ind2=N;
            ll j = 1;
            while((conne-j)>0){
                if(closed[conne-j]==0){
                    ind1 = j;
                    break;
                }
                j++;
            }
            j = 1;
            while((conne+j)<=floors){
                if(closed[conne+j]==0){
                    ind2 = j;
                    break;
                }
                j++;
            }
            cout<<min(ind1,ind2)<<"\n";
        }
        closed.clear();
    }

}
