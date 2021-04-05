#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long int a, b, ans;
	int t;
	cin>>t;
	while(t--){
		cin>>a>>b;
		ans = a-b;
		if(ans==0){
			cout<<"=\n";
		}else if(ans>0){
			cout<<">\n";
		}else if(ans<0){
			cout<<"<\n";
		}
	}
 
 
	return 0;
}