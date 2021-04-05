#include <bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	for(int i=4; i<num; i++){
		bool flag1= (i%2==0)||(i%3==0);
		bool flag2= ((num-i)%2==0||(num-i)%3==0);
		if(flag1&&flag2){
			cout<<i<<" "<<num-i<<endl;
			return 0;
		}
	}
}