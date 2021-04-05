#include <bits/stdc++.h>
using namespace std;
int main() {
	int num;
	cin>>num;
	int mult=1;
	while(num>0){
		mult*=num%10;
		num/=10;
	}
	cout<<mult<<endl;
	return 0;
}