#include <bits/stdc++.h>
using namespace std;

int binary(int n) {
	string bin = "";
	for (int i = 8; i >= 0; i--){
		bin += (((n >> i) & 1) ? "1" : "0");
	}
	stringstream ss(bin);  
	int num = 0;
	ss >> num;
	return num;
}

int main() {
	int t;
	cin>>t;
	for (int i=1; i<=t; i++){
		int i1, i2, i3, i4, b1,b2,b3,b4;
		scanf("%d.%d.%d.%d", &i1, &i2, &i3, &i4);
		scanf("%d.%d.%d.%d", &b1, &b2, &b3, &b4);
		cout<<"Case "<<i<<": ";
		if(binary(i1)==b1 && binary(i2)==b2 && binary(i3)==b3 && binary(i4)==b4){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}	
	}
	
}