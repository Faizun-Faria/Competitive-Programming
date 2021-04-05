#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	int t;
	ll n,m,ans;
	cin>>t;
	for(int i=1; i<=t; i++){
		cin>>n>>m;
		ans = (n*m)/2;
		cout<<"Case "<<i<<": "<<ans<<"\n";
	}
}