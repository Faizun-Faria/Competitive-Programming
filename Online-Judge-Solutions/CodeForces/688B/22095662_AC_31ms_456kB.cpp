#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string str;
	cin>>str;
	string str2 = str;
	
	for(int i=str.length()-1; i>=0;i--){
		str2+=str[i];
	}
	cout<<str2<<endl;
	return 0;
}