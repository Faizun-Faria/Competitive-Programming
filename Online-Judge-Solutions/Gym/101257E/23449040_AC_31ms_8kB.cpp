#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int f1, f2,f3, l1, l2,l3;
    cin>>f1>>f2>>f3>>l1>>l2>>l3;
    int co=0;
    if((f1==l1)||(f1==l2)||(f1==l3)){
        co++;
    }
    if((f2==l1)||(f2==l2)||(f2==l3)){
        co++;
    }
    if((f3==l1)||(f3==l2)||(f3==l3)){
        co++;
    }
    if(co==2){
        cout<<4<<"\n";
    }else cout<<6<<"\n";
}

