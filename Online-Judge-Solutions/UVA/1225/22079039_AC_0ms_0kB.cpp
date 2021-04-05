#include <bits/stdc++.h>
using namespace std;
#define mx 10005
int arr[mx][10];
int main(){
	for(int i=1; i<mx; i++){
		for(int j=0; j<10; j++){
    		arr[i][j] = arr[i-1][j];
    	}
    	int n =i;
    	while(n>0){
    		arr[i][n%10]++;
    		n/=10;
    	}
	}
    int testCase;
    cin>>testCase;
    int num;
    for(int i=0; i<testCase; i++){
    	cin>>num;
    	for(int j=0; j<9;j++){
    		cout<<arr[num][j]<<" ";
    	}	
    	cout<<arr[num][9]<<endl;	
    }
    	
return 0;
}