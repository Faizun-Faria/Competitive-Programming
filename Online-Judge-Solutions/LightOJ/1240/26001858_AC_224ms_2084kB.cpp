#include <bits/stdc++.h>
using namespace std;
double px,py,pz;
double distance(double x,double y, double z) {
    double xyz = ((x-px)*(x-px))+((y-py)*(y-py))+((z-pz)*(z-pz));
    xyz = sqrt(xyz);
    return xyz;
}

int main() {
    int t;
    cin>>t;
    for(int i=1; i<=t; i++) {
        double ax,ay,az,bx,by,bz;
        cin>>ax>>ay>>az>>bx>>by>>bz>>px>>py>>pz;
        double lx=ax,ly=ay,lz=az,hx=bx,hy=by,hz=bz,m1x,m1y,m1z,m2x,m2y,m2z;
        int itr=100;
        while(itr--) {
            m1x= (lx+lx+hx)/3.0;
            m1y= (ly+ly+hy)/3.0;
            m1z= (lz+lz+hz)/3.0;
            m2x= (lx+hx+hx)/3.0;
            m2y= (ly+hy+hy)/3.0;
            m2z= (lz+hz+hz)/3.0;
            double dis_1 = distance(m1x,m1y,m1z);
            double dis_2 = distance(m2x,m2y,m2z);

            if(dis_1>dis_2) {
                lx=m1x;
                ly=m1y;
                lz=m1z;

            } else {
                hx=m2x;
                hy=m2y;
                hz=m2z;

            }

        }
        cout<<"Case "<<i<<": ";
        cout<<fixed<<setprecision(10)<<distance(hx,hy,hz)<<"\n";
    }

}
