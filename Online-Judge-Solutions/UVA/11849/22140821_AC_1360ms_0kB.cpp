#include <bits/stdc++.h>
using namespace std;

int main() {
	int jack, jill;
	int count1=0;
	map <int, int> mp;
	while(cin>>jack>>jill){
		mp.clear();
		if((jack==0)&&(jill==0)) break;
		int k;
		count1=0;
		for(int i =0;i<jack; i++){
			cin>>k;
			mp[k]=1;
		}
		for(int i =0;i<jill; i++){
			cin>>k;
			if(mp[k]==1) count1++;
		}
	cout<<count1<<endl;	
	}
	
	return 0;
}