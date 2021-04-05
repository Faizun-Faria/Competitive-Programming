#include <bits//stdc++.h>
using namespace std;
const int mx = 100005;
int arr[mx];
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;

    int arr2 [4];
    arr2[0]=k;
    arr2[1]=l;
    arr2[2]=m;
    arr2[3]=n;
    for(int i=0; i<4; i++){
       for(int j=arr2[i]; j<=d; j+=arr2[i]){
               arr[j] = 1;
       }

    }
     int coun =0;
     for(int i=1; i<=d; i++){
        if(arr[i]==1) {
           coun++;
        }
    }
    cout<<coun<<"\n";
    return 0;
}
