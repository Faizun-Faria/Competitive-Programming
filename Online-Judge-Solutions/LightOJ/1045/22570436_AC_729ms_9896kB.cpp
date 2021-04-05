#include <bits/stdc++.h>
using namespace std;
const int mx = 1e6+5;
#define ll long long int
int main() {
	int testCase;
	cin>>testCase;
	double factorial[mx];
	factorial[0]=0;
	for(int i=1; i<mx; i++){
		factorial[i]=factorial[i-1]+log(i);
	}
	
	int n;
	int base;
	for(int i= 0; i<testCase; i++){
		cin>>n>>base;
		double y;
		y= factorial[n]/log(base);
		
		cout<<"Case "<<i+1<<": "<<(int)y +1<<endl;
	}
	return 0;
}