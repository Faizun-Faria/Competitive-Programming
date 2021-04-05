#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cin>>testCase;
    int a,b,g,l;
    int count1;
    for(int i=0; i< testCase; i++){
    	l=0;
    	count1=0;
        cin>>a;
        cin>>b;
        while((a!=0)||(b!=0)){
            g = (a%10)+(b%10);
            if(g>9) g = g%10;
            l =l + pow(10,count1)* g; 
            count1++;   
            a/=10;
            b/=10;
        }
        cout<<l<<endl;
   }
return 0;
}