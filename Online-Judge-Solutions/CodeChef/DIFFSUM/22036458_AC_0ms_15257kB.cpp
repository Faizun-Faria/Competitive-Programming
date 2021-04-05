#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x;
cin>>y;
int num;
if(x>y) num = x - y;
else num = x+y;
cout<<num;
return 0;
}