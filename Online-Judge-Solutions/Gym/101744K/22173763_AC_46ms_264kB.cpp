#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int l = str.length();
    int count1=1;
    for(int i=0;i<l;i++){
        if(str[i]==str[i+1]){
            count1+=1;
        }else if(str[i]!=str[i+1]){
            cout<<str[i]<<count1;
            count1=1;
        }
    }
    cout<<endl;
    return 0;
}
