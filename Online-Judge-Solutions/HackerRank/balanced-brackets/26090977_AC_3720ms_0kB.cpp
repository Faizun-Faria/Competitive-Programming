#include <bits/stdc++.h>
using namespace std;
string isBalanced(string str){
    stack <int> stk;
    for(int i=0; i<str.length(); i++ ){
        if((str[i]=='(')||(str[i]=='{')||(str[i]=='[')){
            stk.push(str[i]);
        }else{
            if (stk.size()>0 && ((str[i]==')' && stk.top()=='(')||(str[i]=='}' && stk.top()=='{')||(str[i]==']' && stk.top()=='['))){
                stk.pop();
            }else{
                return "NO";
            }
        }
    }
    if(stk.size()==0)return "YES";
    else return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        cout<<isBalanced(str)<<"\n";
    }
}
