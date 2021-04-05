#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	if(n%2==0) cout<<n;
	else{
		n*=2;
		cout<< n;
	}
	return 0;
}