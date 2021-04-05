#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n;
	cin>>n;
	int c[s.size()];
	c[0]=0;
	for(int i=1;i<s.size();i++){
		c[i] = c[i-1]+(s[i]==s[i-1]);
	}
	int l,r;
	while(n--){
		cin>>l>>r;
		cout<<c[r-1]-c[l-1]<<"\n";
		
	}
	return 0;
}