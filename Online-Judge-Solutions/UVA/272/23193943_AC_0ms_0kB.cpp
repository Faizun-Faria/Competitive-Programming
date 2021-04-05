#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, ans, s;
    while (getline(cin, s)) {
        if(!str.empty())
            str+="\n";
        str+=s;
    }
    
        ans="";
        int cou =0;
        for(int i=0; i<str.length(); i++) {
            if(str[i]=='"') {
                if(cou%2==0) {
                    ans+= "\`\`";
                } else {
                    ans+="\'\'";
                }
                cou++;
            } else
                ans+=str[i];
        }
        cout<<ans<<"\n";

    
}