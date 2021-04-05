#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	string str2 = "#";
	map <string , string> mp;
	mp ["HELLO"] = "ENGLISH";
	mp ["HOLA"] = "SPANISH";
	mp ["HALLO"] = "GERMAN";
	mp ["BONJOUR"] = "FRENCH";
	mp ["CIAO"] = "ITALIAN";
	mp ["ZDRAVSTVUJTE"] = "RUSSIAN";
	
	int i =1;
	while(cin>>str && str!=str2){
		if(mp[str]=="")  cout<<"Case "<<i<<": "<<"UNKNOWN"<<"\n";
		else cout<<"Case "<<i<<": "<<mp[str]<<"\n";
		i++;
	}
	return 0;
}