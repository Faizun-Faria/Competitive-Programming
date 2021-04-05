#include <bits/stdc++.h>
using namespace std;
int main(){
    int a [30];
    memset (a, 0, sizeof(a));
    string s;
    int count;
    cin>>s;
    for(int i =0; i< s.size(); i++){
    	int x;
    	x = (int)s[i]-97;
    	++a[x];
    	if(a[x]==1) count++;
    }
    if(count%2==0) cout<<"CHAT WITH HER!"<<endl;
    else  cout<<"IGNORE HIM!"<<endl;
    
return 0;
}