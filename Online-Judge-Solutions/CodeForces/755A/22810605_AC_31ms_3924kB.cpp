#include <bits/stdc++.h>
using namespace std;
const int mx = 1e6;
int arr[mx+ 1];
int i=2;
void isPrime(){
	for(int i=2;i*i<=mx; i++){
		if(arr[i]==0){
			for(int j=i*i; j<=mx; j+=i){
				arr[j]=1;
			
			}
		}
	}
}
int main(){
	isPrime();
    int n;
    cin>>n;
    int m=1;
    int ans= n*m+1;
    while(arr[ans]==0){
    	m++;
    	ans = n*m+1;
    }
    cout<< m<<endl;
}