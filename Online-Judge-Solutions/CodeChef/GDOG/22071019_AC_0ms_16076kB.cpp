#include <bits/stdc++.h>
using namespace std;

int main()
{
	int testCase;
	cin>>testCase;
	int n;
	int k;
	int num; 
	for(int i=0; i<testCase; i++){
		int max=0;
		cin>>n>>k;
		for(int j=k; j>0;j--){
			num = n%j;
			if(max<num){
				max = num;
			}
		}
		cout<<max<<endl;	
		} 
	
    return 0;
}
