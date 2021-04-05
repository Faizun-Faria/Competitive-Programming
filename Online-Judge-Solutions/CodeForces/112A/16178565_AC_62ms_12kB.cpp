#include <bits/stdc++.h>
using namespace std;
int main() {
  string s1,s2;
  cin>> s1>>s2;
  int l = s1.length();
  int count1 =0;
  int count2=0;
  bool flag = false;
  transform(s1.begin(), s1.end(), s1.begin(),  ::tolower);
  transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
  for (int x =0;x <l;x++){
    count1 += (int) s1[x];
    count2 += (int) s2[x];
    if(count1>count2){
      cout<< 1<< endl;
      flag = false;
      break;
    } 
    else if(count2>count1){
       cout<< -1<<endl;
       flag = false;
       break;
    }else if(count1==count2){
      flag = true;
    }
  }
  if(flag == true)  cout<< 0 << endl;  
  return 0;
}