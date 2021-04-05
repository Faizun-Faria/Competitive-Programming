#include <bits//stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];

    }
    int coun=b[0];
    int mx=coun;
    for(int i=1; i<n; i++){
        if(a[i]>coun){
           coun=0;
        }
        else{
            coun= coun-a[i]+b[i];
            if(coun>mx) mx= coun;
        }

    }
    cout<<mx<<"\n";
    return 0;
}
