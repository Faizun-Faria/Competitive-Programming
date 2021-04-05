#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int hea,tim;
    cin>>hea>>tim;
    ll in[hea],  inp[tim];
    vector <ll> h,t;
    for(int i=0; i<hea; i++){
        cin>>in[i];
        h.push_back(in[i]);
        if (i==0) continue;
        h[i] += h[i-1];
    }
    ll total = h[hea-1];
    for(int i=0; i<tim; i++){
        cin>>inp[i];
        t.push_back(inp[i]);
        if(t[i]>=total){
            t[i]=total;
            continue;
        }
        if (i==0) continue;


        if(t[i-1]==total) continue;
        t[i]+=t[i-1];
        if(t[i]>total) t[i]= total;
    }

    for(int i=0; i<tim; i++){
        int pos = lower_bound(h.begin(),h.end(), t[i])- h.begin();
        if(h[pos]==t[i]){
                if (pos==hea-1){
                    cout<<hea<<"\n";
                }else{
                    cout<<(hea-(pos+1))<<"\n";
                }
        }else{
            if(pos==0){
               cout<<hea<<"\n";
            }else{
                cout<<(hea-pos)<<"\n";
            }

        }
    }
}
