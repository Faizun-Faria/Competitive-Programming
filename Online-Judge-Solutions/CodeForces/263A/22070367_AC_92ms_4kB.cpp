#include <bits/stdc++.h>
using namespace std;

int main()
{
	int sum;
    int arr [5][5];
    for(int i=0; i<5;i++){
    	for(int j=0; j<5; j++){
    		cin>> arr[i][j];
    		if (arr[i][j]==1) {
    			int x,y;
    			x= 	2- i;
    			if (x<0) x=-x;
    			y = 2-j;
    			if (y<0) y=-y;
    			sum = x+y;
    		}
    		
    	}
    }
    cout<<sum<<endl;
    return 0;
}
