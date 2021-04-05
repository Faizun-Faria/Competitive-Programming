#include <bits/stdc++.h>
using namespace std;
const int mx =1000000;
int arr[mx];
void trailingZero(){
	for(int i=0; i<mx; i++){
		int num=i;
		int cnt=0;
		while(num>0){
			cnt+=num/5;
			num/=5;
		}
		arr[i]=cnt;
	}
}
int main() {
	trailingZero();
	int val;
	cin>>val;
	int ub = upper_bound(arr, arr+mx, val)-arr;
	int lb= lower_bound(arr, arr+mx, val)-arr;
	int ans = ub-lb;
	if(ans>0){
		cout<<ans<<endl;
		for(int i=lb; i<ub; i++){
			cout<<i<<" ";
		}
	}
	else cout<<ans<<endl;
	
	return 0;
}