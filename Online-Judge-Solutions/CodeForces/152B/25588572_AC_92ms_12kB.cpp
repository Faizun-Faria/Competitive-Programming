#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n, m, x, y;
    cin>>n>>m>>x>>y;
    int k;
    cin>>k;
    ll dx, dy, XP, XN, XZ, YP, YN, YZ, cou=0, temp;
    while(k--){
        cin>>dx>>dy;
        if(dx>0){
            XP = (n - x)/dx;
            if(dy>0){
                YP = (m-y)/dy;
                temp = min(XP,YP);
                x += (temp*dx);
                y += (temp*dy);
            }else if(dy<0){
                YN = (1-y)/dy;
                temp = min(XP,YN);
                x += (temp*dx);
                y += (temp*dy);
            }else {
                temp = XP;
                x += (temp*dx);
                y += (temp*dy);
            }
        }
        else if(dx<0){
            XN = (1 - x)/dx;
            if(dy>0){
                YP = (m-y)/dy;
                temp = min(XN,YP);
                x += (temp*dx);
                y += (temp*dy);
            }else if(dy<0){
                YN = (1-y)/dy;
                temp = min(XN,YN);
                x += (temp*dx);
                y += (temp*dy);
            }else {
                temp = XN;
                x += (temp*dx);
                y += (temp*dy);
            }
        }
        else{
            XZ = max(-(1-x),(n-x));
            if(dy>0){
                YP = (m-y)/dy;
                temp = YP;
                x += (temp*dx);
                y += (temp*dy);
            }else if(dy<0){
                YN = (1-y)/dy;
                temp = YN;
                x += (temp*dx);
                y += (temp*dy);
            }else {
                temp = 0;
            }
        }
        cou += temp;
    }
    cout<<cou<<"\n";
}
