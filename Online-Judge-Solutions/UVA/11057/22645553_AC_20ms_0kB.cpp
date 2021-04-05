#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while((cin>>n)&& n){
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		int num;
		cin>>num;
		sort(arr, arr+n);
		int ans1=0,ans2=0;
		int high =n-1;
		int low=0;
		while(high>low){
			if((arr[high]+arr[low])==num){
				ans1= arr[high];
				ans2= arr[low];
				high--;
				low++;
			}else if((arr[high]+arr[low])>num){
				high--;
			}else if((arr[high]+arr[low])<num){
				low++;
			}
		}
		cout<<"Peter should buy books whose prices are "<<ans2<<" and "<<ans1<<"."<<endl;
		cout<<endl;
	}
	
}