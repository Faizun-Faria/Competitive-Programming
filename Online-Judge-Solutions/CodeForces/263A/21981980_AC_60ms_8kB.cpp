#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
    int a [5][5];
    for(int i=0; i<5; i++){
    	for(int j=0; j<5; j++){
    		cin>>a[i][j];
    		if (a[i][j]==1){
    		     x=i+1;
    			 y=j+1;
    		}
    	}
    }
    int count;
    x = x-3;
    if(x<0) x=-x;
    y = y-3;
    if(y<0) y=-y;
    count = x+y;
    cout<< count;
return 0;
}