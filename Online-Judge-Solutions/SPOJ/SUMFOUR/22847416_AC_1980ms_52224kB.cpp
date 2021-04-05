#include <bits/stdc++.h>
using namespace std;

int main() {
	int num;
	cin>>num;
	int a[num];
	int b[num];
	int c[num];
	int d[num];
	
	for(int i=0; i<num; i++){
		cin>>a[i]>>b[i]>>c[i]>>d[i];
	}
	
	int ab[num*num];
	int cd [num*num];
	int k=0;
	for(int i=0; i<num; i++){
		for(int j=0; j<num; j++){
			ab[k]= a[i]+b[j];
			cd[k] = c[i]+ d[j];
			k++;
		}
		
	}
	k=0;
	int cnt=0;
	sort(ab, ab+(num*num));
	for(int i=0; i<num*num; i++){
			pair<int*,int*>p = equal_range(ab, ab+num*num, -cd[i]);
			k++;
    		cnt+=p.second-p.first;
		
	}

	cout<<cnt<<endl;
	return 0;
}