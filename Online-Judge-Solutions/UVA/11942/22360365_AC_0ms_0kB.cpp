#include <bits/stdc++.h>
using namespace std;
bool flag = false;
int arr[10];
bool asc(){
	for(int j=1; j<10; j++){
		if(arr[j-1]<arr[j]) flag=true;
		else{
			flag=false; 
			break;
		}
		
	}
	return flag;
}
bool desc(){
	for(int j=1; j<10; j++){
		if(arr[j-1]>arr[j]) flag=true;
		else{
			flag=false; 
			break;
		} 
		
	}
	return flag;
	
	
}
int main(){
	int testCase;
	cin>>testCase;
	cout<<"Lumberjacks:"<<endl;
	for(int i=0; i<testCase; i++){
		for(int j=0; j<10;j++){
			cin>>arr[j];
		}
		if(arr[0]>arr[1]){
			flag=desc(); 
		} 
		else if(arr[0]<arr[1]){
			flag=asc(); 
		} 
		if(flag) cout<<"Ordered"<<endl;
		else cout<<"Unordered"<<endl;
	}
	return 0;
}