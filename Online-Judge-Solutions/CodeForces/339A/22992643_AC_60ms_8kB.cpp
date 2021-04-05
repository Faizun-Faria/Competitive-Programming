#include <bits//stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    string str;
    cin>>str;
    int l= str.length();
    map <char, int> mp;
    for(int i=0; i<l; i+=2){
        mp[str[i]]++;
    }
    string s="";
    for(int i=0;i<mp['1']; i++){
        s+="1+";
    }
    for(int i=0;i<mp['2']; i++){
        s+="2+";
    }
    for(int i=0;i<mp['3']; i++){
        s+="3+";
    }
    for(int i=0; i<l; i++){
        cout<<s[i];

    }
    cout<<"\n";
	return 0;
}
