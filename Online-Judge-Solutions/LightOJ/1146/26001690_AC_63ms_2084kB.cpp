#include <bits/stdc++.h>
using namespace std;
double ax, ay, bx, by, cx, cy, dx, dy;

double distance(double time){
    double X1 = ax + time*(bx-ax);
    double X2 = cx + time*(dx-cx);
    double Y1 = ay + time*(by-ay);
    double Y2 = cy + time*(dy-cy);
    double dis = ((X1-X2)*(X1-X2))+((Y1-Y2)*(Y1-Y2));
    return sqrt(dis);
}
int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
        double hi = 1.0;
        double lo = 0.0;
        double itr = 1000;
        while(hi>lo && itr-- ){
            double mid1 = (lo+lo+hi)/3.0;
            double mid2 = (lo+hi+hi)/3.0;
            if(distance(mid1)>distance(mid2)){
                lo = mid1;
            }else {
                hi = mid2;
            }
        }
        cout<<"Case "<<i<<": ";
        cout<<fixed<<setprecision(10)<<distance(hi)<<"\n";

    }
}
