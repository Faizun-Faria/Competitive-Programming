#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
	string str;
	map <string ,int> mp;
	cin>>testCase;
	cin.ignore();
	cin.ignore();
	while(testCase--){
		mp.clear();
		int count1 =0;
		while(getline(cin,str)&& str!=""){
			mp[str]++; 
			count1++;
		}
		map <string ,int> :: iterator itr;
		double num = 0.0;
		for(itr= mp.begin(); itr!=mp.end(); itr++){
			string s = itr -> first;
			cout<<s<<" ";
			num = itr -> second;
			num = num*100.0/count1;
			cout << fixed<<setprecision(4)<<num<<endl;
		}
		if(testCase>0) cout<<"\n";
	}
	return 0;
}