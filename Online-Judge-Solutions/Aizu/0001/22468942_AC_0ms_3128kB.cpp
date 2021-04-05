#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[10];
	for(int i=0; i<10; i++){
		cin>>arr[i];
	}
	sort(arr, arr+10);
	cout<<arr[9]<<endl;
	cout<<arr[8]<<endl;
	cout<<arr[7]<<endl;
	return 0;
}