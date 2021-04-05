#include<bits/stdc++.h>
using namespace std;
int arr[51];
//0 Prime
//1 not Prime
void seive(){
    arr[1]=1;
    arr[0]=1;
    for(int i=2; i<51; i++){
        if(arr[i]==0){
            for(int j= i*i; j<51; j+=i){
                arr[j]=1;
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    seive();
    int k=n+1;
    while(arr[k]==1){
        k++;
    }
    if(k==m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
