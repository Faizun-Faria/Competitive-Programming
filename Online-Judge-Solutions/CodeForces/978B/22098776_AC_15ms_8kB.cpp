#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	string str;
	cin>>str;
	int countM=0;
	for(int i=0; i<str.length();i++){
		int count1=0;
		if(str[i]=='i'){
			
			continue;
		}
		int j;
		for(j=i; j<str.length();j++){
			if(str[j]=='x'){
				count1+=1;
				if(count1>2){
					countM+=1;
				}
			}
			else{	
				break;	
			} 
		}
		i=j;
	}
	cout<<countM<<endl;
	return 0;
}