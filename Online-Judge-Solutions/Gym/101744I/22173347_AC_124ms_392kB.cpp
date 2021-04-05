#include <bits/stdc++.h>
using namespace std;
int main(){

    int n=0,t=0;
    cin>>n>>t;
    int arr[n];
    int count1=0, count2=0;
    int t1=0,t2=0;
    memset(arr,0,sizeof(arr));
    for(int i=0; i<n; i++){
        int in;
        cin>>in;
        arr[i]=in;
    }
    for(int i=0; i<n; i++){
        t1+=arr[i];
        count1++;
        if(t1==t){
            break;
        }else if(t1>t){
            t1-=arr[i];
            count1--;
            break;
        }
    }
    for(int i=n-1; i>=0; i--){
        t2+=arr[i];
        count2++;
        if(t2==t){
            break;
        }else if(t2>t){
            t2-=arr[i];
            count2--;
            break;
        }
    }
    if(count1>count2) cout<<"Yan"<<endl;
    else if (count1<count2) cout<<"Nathan"<<endl;
    else cout<<"Empate"<<endl;
}
