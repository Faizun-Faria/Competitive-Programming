#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
	cin>>testCase;
	int n,l;
	for(int i =0; i< testCase; i++){
		cin>>n;		
		n=n/6;
		n=((int)(pow(n,.5)) );
		cout<<n<<endl;
	}
return 0;
}