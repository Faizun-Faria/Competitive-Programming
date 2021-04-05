#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[14]= {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	int a;
	cin>>a;
	bool flag=true;
	for(int i=0; i<14;i++){
		if(arr[i]==a){
			flag=true;
			break;
		}else if(a%arr[i]==0){
			flag=true;
			break;
	
		}else{
			flag = false;
		}
		
	}
	
	if(flag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}