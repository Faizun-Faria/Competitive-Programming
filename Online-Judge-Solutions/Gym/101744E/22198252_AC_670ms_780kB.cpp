#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n;
    cin>>n;
    int testCase;
    cin>>testCase;
    ll arr[n+1];
    arr[0] =0;
    for(int i=1; i<=n; i++){
    	ll num;
    	cin>>num;
    	arr[i]=arr[i-1]+num;
    }
    for(int i=0; i<testCase; i++){
    	int n1,n2;
    	cin>>n1>>n2;
    	ll ans =0;ans= arr[n2]- arr[n1-1];
    	if(ans%2==0) 	cout<<"Sim"<<endl;
    	else cout<<"Nao"<<endl;
    }
    return 0;
}