#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,q;
	int k=1;
	while(cin>>n>>q){
		if((n==0)&&(q==0)) break;
		int arr[n];
		int arr2[q];
		for(int i=0; i<n; i++){
			cin>>arr[i];	
		}
		sort(arr, arr+n);
		cout<<"CASE# "<<k<<":"<<endl;
		for(int i=0; i<q; i++){
			cin>>arr2[i];	
		}
		k++;
		for(int i=0; i<q; i++){
			bool flag=false;
			for(int j=0; j<n; j++){
				if(arr2[i]==arr[j]) {
					flag=true;
					cout<<arr2[i]<<" found at "<<j+1<<endl;
					break;
				}
			}
			if(!flag)  cout<<arr2[i]<<" not found"<<endl;
		}
		
	}
	return 0;
}