#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase; 
	cin>>testCase;
	long long num;
	for(int j=0; j<testCase;j++){
	cin>>num;
	long long n = num/10;
	long long sum = n*(n+1)/2;
	cout<<sum*10<<endl;
	}
	return 0;
}