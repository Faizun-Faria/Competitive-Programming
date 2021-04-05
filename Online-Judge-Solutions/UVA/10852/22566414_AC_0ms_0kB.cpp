#include <bits/stdc++.h>
using namespace std;
int arr[10000];

void isPrime(){
	for(int i=2; i*i<10000; i++){
		if(arr[i]==0){
			for(int j=i*i; j<10000; j+=i){
				arr[j]=1;
			}
		}
	}
}
int main() {
	isPrime();
	int testCase;
	cin>>testCase;
	int x;
	for(int i=0; i<testCase; i++){
		cin>>x;
		int y = x/2;
		for(int j=y+1; j<x; j++){
			if(arr[j]==0){
				cout<<j<<endl;
				break;
			}
		}
	}
	return 0;
}