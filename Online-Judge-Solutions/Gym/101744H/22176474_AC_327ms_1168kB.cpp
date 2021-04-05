#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n;
    cin>>n;
    ll n1=0,n2=0;
    ll a=0,b=0,c=0;
    ll sum1=0,sum2=0;
    int arr[3][n];
    for(int i=0;i<3;i++){
            for(int j=0; j<n;j++){
                int k ;
                cin>>k;
                arr[i][j]=k;
            }
    }
    for(int i=0;i<n;i++){
            n1 = arr[0][i]-arr[1][i];
            n2= arr[0][i]-arr[2][i];
            n1= n1*n1;
            n2= n2*n2;
            sum1+=n1;
            sum2+=n2;

    }
    int f =(int)(pow(sum1,0.5));
    int l =(int)(pow(sum2,0.5));
    if(f<=l) cout<<"Yan"<<endl;
    else cout<<"MaratonIME"<<endl;
    return 0;
}
