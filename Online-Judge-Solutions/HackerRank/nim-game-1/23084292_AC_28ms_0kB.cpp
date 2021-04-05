#include <bits//stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int num1, num2;
		cin>>num1;
		for(int i=2; i<=n; i++){
			cin>>num2;
			num1^=num2;
		}
		if(num1==0){
			cout<<"Second\n";
		}else {
			cout<<"First\n";
		}
		
	}
	return 0;
}