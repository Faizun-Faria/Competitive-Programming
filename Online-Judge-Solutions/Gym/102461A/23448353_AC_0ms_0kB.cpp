#include <bits/stdc++.h>
using namespace std;
int main(){
    string str, str2;
    cin>>str;
    for(int i =0; i<str.length(); i++){
        if ((str[i]=='+')||(str[i]=='-')||(str[i]=='*')||(str[i]=='/')){
                str2+=" ";
                str2+=str[i];
                str2+=" ";
        }
        else str2+=str[i];

    }
    cout<<str2<<"\n";
}

