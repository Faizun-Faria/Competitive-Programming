#include <bits/stdc++.h>
using namespace std;
int main(){
	int testCase;
	cin>>testCase;
	for(int i=0; i<testCase; i++){
		int n;
		cin>>n;
		int h=0;
		int l=0;
		int arr[n];
		for(int j=0; j<n; j++){
			cin>>arr[j];
		}
		for(int j=1; j<n; j++){
			if(arr[j-1]<arr[j]) h++;
			else if(arr[j-1]>arr[j]) l++;
		}
		cout<<"Case "<<i+1<<": "<<h<<" "<<l<<endl;
	}
	return 0;
}