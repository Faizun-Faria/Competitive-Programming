#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,c;
    int arr[3];
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        arr[0]=min(a,c);
        arr[1]=max(a,c)/2;
        arr[2]=(max(a,c)+1)/2;
        int mx = max(arr[0],max(arr[1],arr[2]));
        int sum = (3*mx - (arr[0]+arr[1]+arr[2]));
        b-=sum;
        int res = 0;
        if(b>0)res=(b+2)/3;
        res+=mx;
        cout<<res<<"\n";
    }

}
