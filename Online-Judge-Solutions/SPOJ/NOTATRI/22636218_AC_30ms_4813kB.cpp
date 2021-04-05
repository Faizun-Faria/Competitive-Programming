#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while((cin>>n)&& n){
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		int cou=0;
		sort(arr, arr+n);
		int num = n-1;
		for(int i=num;i>1;i--){
		int high=i-1;
		int low = 0;
		
		while (low<high){
			if(arr[i]>arr[high]+arr[low]){
				cou+=(high-low);
				low++;
			}else{
				high--;
			}
		}
	}
	
		cout<<cou<<endl;
	}
	return 0;
}