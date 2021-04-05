#include <bits/stdc++.h>
using namespace std;
 
int n,d, idx;
int mx= 1e5 +1;
 
string str;
 
char Max(int y){
	char maxim = '0';
	for(int k = idx; k < n - y; k++){
		if(maxim < str[k]) maxim = str[k], idx = k+1;
	}
	return maxim;
}
 
int main(){
	while (cin>>n>>d && n && d){
		idx=0;
		cin>>str;
		string strNew="";
		for (int j = n-d; j--; ) {
			strNew += Max(j);
		}
		cout << strNew << endl;
	}
	return 0;
}