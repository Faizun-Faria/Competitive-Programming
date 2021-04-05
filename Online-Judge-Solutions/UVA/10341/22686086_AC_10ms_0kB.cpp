#include <bits/stdc++.h>
using namespace std;
#define eps 1e-9

double p,q,r,s,t,u;

double func(double x){
    double ans = p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x +u;
    return ans;
}

int main(){
	while (scanf("%lf %lf %lf %lf %lf %lf", &p, &q, &r, &s, &t, &u) != EOF){
		double low=0;
		double high=1;
		double mid;

    if(func(low)<-eps || func(high)>eps){
        cout<<"No solution"<<endl;
    }else{
        for(int i=0; i<100; i++){
            mid = (low+high)/2;
            if(func(mid)<0) high=mid;
            else low=mid;
        }
        printf("%.4lf\n", mid);
    }
	}
    return 0;
}
