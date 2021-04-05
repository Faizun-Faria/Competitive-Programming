#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n;
	int arr[s.length()];
	memset(arr,0,sizeof(arr));
	for(int i=0; i<s.length()-1;i++){
		if(s[i]==s[i+1]) n=1;
		else n=0;
		arr[i+1] = arr[i]+ n; 
	}
	
	int testCase;
	cin>>testCase;
	for(int i=0; i<testCase; i++){
		int x,y;
		cin>>x>>y;
		int dif = arr[y-1]- arr[x-1];
		cout<<dif<<endl;
	}
	
return 0;
}