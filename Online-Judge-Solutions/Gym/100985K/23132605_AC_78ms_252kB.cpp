#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    map<char , int> mp;
    for(int i=0; i<str.length(); i++){
        mp[str[i]]++;
        if(str[i]!=str[i+1]) {
            cout<<str[i]<<mp[str[i]];
            mp[str[i]]=0;
        }

    }
    cout<<"\n";
    return 0;
}
