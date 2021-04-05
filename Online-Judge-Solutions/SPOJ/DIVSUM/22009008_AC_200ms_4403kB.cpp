#include <bits/stdc++.h>
using namespace std;
int main(){
	int testCase;
	cin>>testCase;
	int num;
	int n;
	long long div;
	while(testCase--){
		div = 1;
		cin >> num;
		int i;
		for(i=2; i*i<num; i++){
			if(num%i==0) div= div+i+(num/i);
		}
		if((num%i==0)&&(i==num/i)){
				div+=i;
		}
                if(num==1){
                                div=0;
               }
		cout<< div <<endl;
	}
return 0;
}