#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, minim, mx=0;
    cin>>n>>a>>b;
    for(int i=1; i<n; i++){
        minim = min((a/i),(b/(n-i)));
        if(minim>mx) mx = minim;
    }
    cout<<mx<<"\n";

}
