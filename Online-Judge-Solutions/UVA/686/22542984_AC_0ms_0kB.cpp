#include <bits/stdc++.h>
using namespace std;
const int mx=1<<15; 
int arr[mx+5];
void isPrime(){
	arr[0]=arr[1]=1;
	for(int i=2; i*i<=mx; i++){
		if(arr[i]==0){
			for(int j=2*i; j<=mx; j+=i){
				arr[j]= 1;
			}
		}
	}
}
int main() {
	isPrime();
	int n;
	while(cin>>n && n){
		int count1=0;
		for (int i=2; i<=n/2; i++){
			int a=i;
			int b=n-i; 
			if(!arr[a] && !arr[b]){
				count1++;
			}
		}
		cout<<count1<<endl;
	}
	
	return 0;
}