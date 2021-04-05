#include <bits//stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    int a, b, c;
    for(int i=0; i<test; i++){
        cin>>a>>b>>c;
        int co=0;
        while((c>=2)&& (b>=1)){
            co+=3;
            c-=2;
            b--;
        }
        while((b>=2)&& (a>=1)){
            co+=3;
            b-=2;
            a--;
        }
    cout<<co<<"\n";
    }
    return 0;
}
