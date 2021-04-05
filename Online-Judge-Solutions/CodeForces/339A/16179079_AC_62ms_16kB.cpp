#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin>> s;
  int l = s.length();
  int k =l/2;
  int arr [k];
  sort(s.begin(), s.end());
  for(int i =0; i<=k;i++ ){
    arr[i]= s[k+i];
  }
  for(int i =0; i<=k;i++ ){
    cout<< (arr[i]-48);
    if(i!=k) cout<< '+';
  } 
  cout<< endl;
  return 0;
}