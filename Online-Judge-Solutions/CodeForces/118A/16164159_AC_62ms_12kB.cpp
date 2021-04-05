#include <bits/stdc++.h>
	using namespace std;
	int main(){
		string s;
    cin>> s;
    int l = s.length();
    for (int x =0;x<l;x++){
      s[x] = tolower(s[x]);
    }
    for (int x =0;x<l;x++){
      if (s[x]=='a'||s[x]=='e'||s[x]=='i'||s[x]=='o'||s[x]=='u'||s[x]=='y'){
        
      }else{
        cout<< "."<<s[x];
      }
    }
		return 0;
	}