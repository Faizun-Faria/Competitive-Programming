#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define open freopen("input.txt", "r", stdin)
ll elem,op,val;
bool possible(ll m){
    if(elem*m<=op){
        return true;
    }
    return false;
}

int main(){
    int n;
    ll temp;
    cin>>n>>op;
    vector <ll> num;
    for(int i=0; i<n; i++){
        cin>>temp;
        num.push_back(temp);
    }
    sort(num.begin(), num.end());
    ll mid_ind = num.size()/2;
    int pos=0;
    ll inc=0, hi, lo,ans=0;
    val = num[mid_ind];
    while (true){
        pos = upper_bound(num.begin(),num.end(),val)-num.begin();
        val = num[pos];
        elem = pos-mid_ind;
        if(pos==num.size()) {
            ans+=(op/elem);
            break;
        }
        inc = num[pos]-(num[mid_ind]+ans);

        hi = inc, lo=0;
        while(hi>lo){
            ll mid = (hi+lo+1)/2;
            if(possible(mid)){
                lo=mid;
            }else{
                hi= mid-1;
            }
        }
        ///cout<<lo<<"\n";
        if(lo==0) break;
        else if(lo<inc){
            ans+=lo;
            break;
        }else{
            ans+=inc;
            op-=(inc*elem);
        }

    }
    cout<<(num[mid_ind]+ans)<<"\n";
}
