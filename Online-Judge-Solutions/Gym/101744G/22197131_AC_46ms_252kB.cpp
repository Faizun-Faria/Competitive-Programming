#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=0;
    bool flag= true;
    for(int i=0; i<s.length(); i++){
    	if(s[i]=='A') n++;
    	else if (s[i]=='B') n--;
    	if(n<0) {
    		flag = false;
    		break;
    	}
    }
    if((n!=0)||(flag==false)) cout<<"Nao"<<endl;
    else if(flag) cout<<"Sim"<<endl;

    return 0;
}