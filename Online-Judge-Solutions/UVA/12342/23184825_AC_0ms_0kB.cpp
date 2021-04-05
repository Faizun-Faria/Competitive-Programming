#include <bits//stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    long long int num;
    long long int tax;
    int i=0;
    int a = 180000;
    int b = 300000;
    int c = 400000;
    while(i<test){
        i++;
        cin>>num;
        tax=0;
        // 0 to 180000
        if(num<=a){
            cout<<"Case "<<i<<": "<<tax<<"\n";
            continue;
        }
        //180000 to any
        else {
            num-=a;
        }
        //180000 to (180000+300000)
        if(num<b) {
            tax = ceil(num*0.1);
            if(tax<2000) tax = 2000;
            cout<<"Case "<<i<<": "<<tax<<"\n";
            continue;
        //180000 to more than (180000+300000)
        }else {
            tax += ceil(b*.1);
            num-=b;
        }

        if(num<c){
            tax+= ceil(num*.15);
            cout<<"Case "<<i<<": "<<tax<<"\n";
            continue;
        }else {
            tax += ceil(c*.15);
            num-=c;
        }

        if(num<b) {
            tax+= ceil(num*.20);
            cout<<"Case "<<i<<": "<<tax<<"\n";
            continue;
        }else {
            tax += ceil(b*.20);
            num-=b;
            tax+= ceil(num*.25);
            cout<<"Case "<<i<<": "<<tax<<"\n";
            continue;
        }
    }
    return 0;
}
