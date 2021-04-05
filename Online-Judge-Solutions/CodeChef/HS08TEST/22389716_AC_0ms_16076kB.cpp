#include <bits/stdc++.h>
using namespace std;
int main(){
	int x;
	double y;
	scanf("%d%lf", &x, &y);
	double z =(double)x;
	 if(x%5==0&&(z+0.5)<y){
		y=y-0.5;
		y-= z;
	}
	printf("%.2lf",y);
	return 0;
}