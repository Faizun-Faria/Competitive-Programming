#include <bits/stdc++.h>
using namespace std;
    int arr[]={6,6};
int main() {
    int n, a, b;
    cin>>n>>a>>b;
    int temp = n;
    int co;
    int na;
    if(2*b<=temp) {
        co=1;
        temp-=(2*b);
        na = 4;
        while(na>0) {
            if(a>temp) {
                temp=n;
                co++;
            }
            temp-=a;
            na--;
        }
        arr[0]=co;
    }

    co=2;
    temp=n-b;
    na = 4;

        if(a <= temp){
           na-=2;
           temp-=a;
           if(a<=temp){
                na-=2;
           }else if(2*a<=n){
                co++;
           }else{
                co+=2;
           }

        }else{
            co++;
            temp = n;
            while(na>0){
                if(a<=temp){
                    temp-=a;
                    na--;
                }else{
                    co++;
                    temp=n;
                }
            }

    }
    arr[1]=co;
    cout<<min(arr[0],arr[1])<<"\n";
}
