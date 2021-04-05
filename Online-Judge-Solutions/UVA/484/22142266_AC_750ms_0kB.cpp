#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
	int num;
	map <int, int> mp;
	map <int, int> ::iterator itr;
	queue <int> q;
	while(cin>>num){
		mp[num]++;
		if(mp[num]==1) q.push(num);
	}
	
	for(int i = q.front(); !q.empty(); q.pop(),i=q.front()){
		for(itr = mp.begin(); itr!= mp.end();itr++){
			int j = itr -> first;
			if(j==i){
				int k = itr -> second;
				cout<<i<<" "<<k<<endl;
			}
			
		}
		
	}
		
	return 0;
}