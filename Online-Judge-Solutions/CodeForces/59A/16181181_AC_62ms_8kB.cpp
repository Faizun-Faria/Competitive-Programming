#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  int countUpper,countLower,length;
  cin>> s;
  countUpper =0;
  countLower =0;
  length = s.length();
  for(int x =0; x< length; x++){
    int asciiValue = (int) s[x];
    if((asciiValue>64)&&(asciiValue<91)) countUpper++;
    else if((asciiValue>96)&&(asciiValue<123)) countLower++;
  }
  if (countUpper>countLower){ 
    transform(s.begin(),s.end(),s.begin(), ::toupper);
    cout<< s<<endl;
  }else if (countUpper<countLower){
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    cout<< s<<endl;
  }else if (countUpper==countLower){
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    cout<< s<<endl;
  }
  return 0;
}

