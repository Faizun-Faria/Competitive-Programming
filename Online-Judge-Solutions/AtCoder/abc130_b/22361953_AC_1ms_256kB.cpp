#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,h;
	cin>>n>>h;
	int arr [n+1];
	arr[0]=0;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		arr[i]=arr[i-1]+a;
	}
	int cou=0;
	for(int i=0;i<=n;i++){
		
		if(arr[i]<=h) cou++;
	}
	cout<<cou<<endl;
	return 0;
}