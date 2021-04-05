#include <bits/stdc++.h>
using namespace std;
#define open            freopen("input.txt", "r", stdin)
const int N = 1e3+10;
int need[N];
int has[N];
int main(){
    //open;
    int ing,magic,temp;
    cin>>ing>>magic;
    for(int i=0; i<ing ; i++){
        cin>>need[i];
    }
    for(int i=0; i<ing ; i++){
        cin>>has[i];
    }
    for(int i=1 ; i<=2001; i++){
        int sum = 0;
        for(int j=0; j<ing; j++){
            temp = (i*need[j]) - has[j];
            if(temp>0) sum+=temp;
        }
        if(sum>magic){
            cout<<(i-1)<<"\n";
            break;
        }
    }

}
