#include <bits/stdc++.h>
using namespace std;
int main() {
  string s1,s2;
  cin>> s1 >> s2;
  bool flag = false;
  int length1 = s1.length();
  int length2 = s2.length();
  for(int x =0,y=length1-1; x< length1; x++,y--){
    if(s1[x]!=s2[y]){
      cout<< "NO"<<endl;
      flag =false;
      break;
    }else{
      flag = true;
    }
  }
  if (flag==true) cout<< "YES"<<endl;
  return 0;
}

