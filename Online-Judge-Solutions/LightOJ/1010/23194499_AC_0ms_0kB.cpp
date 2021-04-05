#include <bits/stdc++.h>
using namespace std;
int main() {
    int testC;
    cin>>testC;
    int a,b, ans=0;
    int num =1;
    while(testC--) {
        cin>>a>>b;
        if(a>b) {
            swap (a,b);
        }
        if(a==1) ans = a*b;
        else if (a==2){
            if (b==2) ans = a*b;
            else {
                if(b%2==1){
                    ans = (b+1)/2;
                    ans*=a;
                }else{
                    if(b%4==0){
                        ans = b/2;
                        ans *= a;
                    }else {
                        ans = (b-1)/2 + 2;
                        ans *= a;
                    }
                }

            }
        }else{
            ans = a*b;
            if(ans%2==1) {
                ans/=2;
                ans+=1;

            }else{
                ans/=2;
            }
        }
        cout<<"Case "<<num<<": "<<ans<<"\n";
        num++;
    }


}
