#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 100;
string str1, str2;
int num[N],flag[N],l,l2;
string str ="";
string constructString(){
    str.clear();
    for(int i=0; i<l; i++){
        if(flag[i]==0)   str+=str1[i];
    }
    return str;
}

void constructFlag(int n){
    memset(flag, 0, sizeof(flag));
    for(int i=0; i<n; i++){
        flag[num[i]-1]= 1;
    }

}
bool check(string s){
    if(s.length()<str2.length()) return false;
    if(s==str2) return true;
    int i=0, j=0;
    while(i<s.length()&& j<l2  ){
         if(str2[j]==s[i]){
            j++;
        }
        i++;
        if(j==str2.length())  return true;
    }
    return false;
}

int main(){
    cin>>str1>>str2;
    l = str1.length();
    l2 = str2.length();
    for(int i=0; i<l; i++){
        cin>>num[i];
    }
    int lo = 0;
    int hi = l;
    while(hi>lo){
        int mid = (hi+lo+1)/2;
        constructFlag(mid);
        string s = constructString();
        if(check(s)){
            lo = mid;
        }else {
            hi = mid -1;
        }
    }
    cout<<hi<<"\n";
}

