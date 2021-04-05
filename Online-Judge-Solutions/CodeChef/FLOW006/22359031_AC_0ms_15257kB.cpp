#include <bits/stdc++.h>
using namespace std;
int main(){
	int testCase;
	cin>>testCase;
	for(int i=0; i<testCase; i++){
		int num;
		cin>>num;
		long long sum=0;
		while(num!=0){
			sum+=num%10;
			num/=10;
		}
		cout<<sum<<endl;
	}
	return 0;
}