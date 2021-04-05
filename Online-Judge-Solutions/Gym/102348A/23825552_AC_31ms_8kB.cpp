#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    int a1, a2, k1, k2,n;
    cin>>a1>>a2>>k1>>k2>>n;
    int ans;
    ans = a1*(k1-1) + a2*(k2-1);
    //min print
    if(ans>=n) cout<<0<<" ";
    else {
        ans = n- ans;
        if(ans <= a1+a2) cout<<ans<<" ";
        else cout<<a1+a2<<" ";
    }


    // max print
    int ans2;
    if(k1>=k2){
        ans2 = n/k2;
        if(ans2<= a2){
           cout<<ans2<<"\n";
        }else {
            n = n - a2*k2;
            ans = n/k1;
            if(ans<=a1){
                cout<<a2+ans<<"\n";
            }else{
                cout<<a1+a2<<"\n";
            }

        }
    }else {
        ans2 = n/k1;
        if(ans2<= a1){
           cout<<ans2<<"\n";
        }else {
            n = n - a1*k1;
            ans = n/k2;
            if(ans<=a2){
                cout<<a1+ans<<"\n";
            }else{
                cout<<a1+a2<<"\n";
            }

        }


    }
}
