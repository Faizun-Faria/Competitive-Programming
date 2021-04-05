#include <bits/stdc++.h>
using namespace std;
int main(){
    
    long long i,j;
    cin>> i;
    cin>>j;
    long long h;
    if(i%2==0) h=i/2;
    else h=i/2 + 1;
    if(j<=h) h = 2*j-1;
    else h = (j-h)*2;
    cout<<h;
return 0;
}