#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int arr[3];
	while(t--){
		cin>>arr[0]>>arr[1]>>arr[2];
		sort(arr, arr+3);
		if(arr[0]==arr[1] && arr[1]==arr[2]){
			cout<<"0\n";
		}else if(arr[0]==arr[1] && arr[0]!=arr[2]){
			arr[2]--;
			if(arr[2]!=arr[1]){
				arr[0]++;
				arr[1]++;
			}
			int ans = (2*arr[2]-2*arr[0]);
			cout<<ans<<"\n";
		}else if(arr[1]==arr[2] && arr[0]!=arr[2]){
			arr[0]++;
			if(arr[0]!=arr[1]){
				arr[1]--;
				arr[2]--;
			}
			int ans = (2*arr[2]-2*arr[0]);
			cout<<ans<<"\n";
		}else if(arr[0]!=arr[1] && arr[1]!= arr[2]){
			arr[0]++;
			arr[2]--;
			int ans = (2*arr[2]-2*arr[0]);
			cout<<ans<<"\n";	
		}
		
	}
	
}