#include <bits/stdc++.h>
using namespace std;

string s = "Faria";
int l = s.length();

void reverseString(int n){
    if(n<0) return;
    cout<<s[n];
    reverseString(n-1);
}
int main(){
    reverseString(l-1);
}
