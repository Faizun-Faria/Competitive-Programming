#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cin>>testCase;
    for(int i=0; i<testCase; i++){
    	string st;
    	cin>>st;
    	int query;
    	cin>>query;
    	for(int j=0; j<query;j++){
    		string s;
    		cin>>s;
    		if(strstr(st.c_str(),s.c_str())) cout<<"y"<<endl;
    		else cout<<"n"<<endl;
    	}
    }
return 0;
}