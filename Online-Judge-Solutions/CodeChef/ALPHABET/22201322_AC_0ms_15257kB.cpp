#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    map <char, char> mp;
    for(int i=0; i<s.length(); i++){
        mp[s[i]]++;
    }
    int testCase;
    cin>>testCase;
    for(int i=0; i<testCase; i++){
            bool flag =true;
        string str;
        cin>>str;
        for(int j=0; j<str.length(); j++){
            if(mp[(str[j])]<=0) {
                flag=false;
                break;
            }

        }
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
