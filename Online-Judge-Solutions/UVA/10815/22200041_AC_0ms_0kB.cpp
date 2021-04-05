#include <bits/stdc++.h>
using namespace std;
bool isLetter(char c1){
    return (((c1>='a')&&(c1<='z'))||((c1>='A')&&(c1<='Z')));
}

int main(){
    set <string> st;
    set <string> ::iterator itr;
    char c;
    string str = "";
    while((c=getchar())!=EOF){
        if(isLetter(c)) str+=tolower(c);
        else if(str!=""){
            st.insert(str);
            str="";
        }

    }

    for(itr=st.begin();itr!=st.end();itr++){
        cout<<*itr<<endl;
    }

    return 0;
}
