#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	int k2,k3,k5,k6;
	cin>>k2>>k3>>k5>>k6;
	int mn;
	ll sum1,sum2,sum;
	mn = min(k2,k5);
	mn = min(mn,k6);
	k2-=mn;
	k5-=mn;
	k6-=mn;
	sum1 = (ll)256*mn;
	mn= min(k3,k2);
	sum2 = (ll)32*mn;
	sum= sum1+sum2;
	cout<<sum<<endl;
	return 0;
}
