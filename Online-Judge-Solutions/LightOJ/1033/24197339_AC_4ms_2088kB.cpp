#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	int t;
	cin>>t;
	string str="", str2 ;
	for(int k=1; k<=t; k++){
		cin>>str;
		str2 = "";
		for(int i= str.length()-1; i>=0; i--){
			str2+=str[i];
		}
		int l = str.length()+1;
		int dp[l][l];
		memset(dp, 0, sizeof(dp));
		
		for(int i=1; i<l; i++){
			for(int j =1; j<l; j++){
				if (str[i-1]==str2[j-1]){
					dp[i][j] = dp[i-1][j-1]+1;
				}else {
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
				}
			}
		}
		cout<<"Case "<<k<<": "<<l - dp[l-1][l-1]-1 <<"\n";
		
	}
}