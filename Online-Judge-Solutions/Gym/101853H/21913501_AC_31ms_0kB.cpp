#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
	cin>>testCase;
	int n,l;
	for(int i =0; i< testCase; i++){
		cin>>n;		
		l=n/6;
		l=((int)(pow(l,.5)) );
		cout<<l<<endl;
	}
return 0;
}