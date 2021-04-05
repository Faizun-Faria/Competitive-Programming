#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cin>>testCase;
    string s;
    string arr[testCase];
    int count1=0;
    for(int i=0; i<testCase;i++){
        cin>>s;
        arr[i] =s;
    }
    for(int i=0; i<testCase-1;i++){
        if(arr[i] != arr[i+1]){
            count1++;
        }
    }
    cout<<count1+1<<endl;
return 0;
}
