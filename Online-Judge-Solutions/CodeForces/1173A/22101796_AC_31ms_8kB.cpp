#include <bits/stdc++.h>
using namespace std;
int main() {
	int x,y,z;
	cin>>x>>y>>z;
	int num;
	if(x>y){
		num=x-y;
		if(num>z){
			cout<<"+"<<endl;	
		}else if(num<z){
			cout<<"?"<<endl;	
		}else if(num==z){
			cout<<"?"<<endl;	
		}
	}else if(y>x){
		num=y-x;
		if(num>z){
			cout<<"-"<<endl;		
		}else if(num<z){
			cout<<"?"<<endl;		
		}else if(num==z){
			cout<<"?"<<endl;		
		}
	}else if(x==y){
		if(z!=0) cout<<"?"<<endl;
		else cout<<"0"<<endl;
	} 
	
	return 0;
}