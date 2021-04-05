#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
b/=2;
c/=4;
int minim = 1000;
if(a<minim){
    minim=a;
}
if(b<minim){
    minim =b;
}
if(c<minim){
    minim =c;
}

int total = minim*7;
cout<<total<<endl;
return 0;
}
