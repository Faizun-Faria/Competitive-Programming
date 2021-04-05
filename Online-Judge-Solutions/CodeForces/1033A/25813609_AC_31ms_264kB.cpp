#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, qx,qy, kx, ky ,cx, cy;
    cin>>n>>qx>>qy>>kx>>ky>>cx>>cy;
    bool flag = false;
    if(qx>kx &&qx>cx){
        if(qy>ky &&qy>cy){
            flag = true;
        }else if(qy<ky && qy<cy){
            flag = true;
        }
    }else if(qx<kx && qx<cx){
        if(qy>ky &&qy>cy){
            flag = true;
        }else if(qy<ky && qy<cy){
            flag = true;
        }
    }

    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
