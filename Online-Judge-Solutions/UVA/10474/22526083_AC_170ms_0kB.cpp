#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, q, x, cas(0);
	vector <int> v;
	while(cin>>n>>q){
		if((n==0)&&(q==0)) break;
		v.clear();
		for (int i = 0; i < n; i++) cin >> x, v.push_back(x);
		sort(v.begin(), v.end());
		printf("CASE# %d:\n", ++cas);
		while (q--) {
			cin >> x;
			int pos = lower_bound(v.begin(), v.end(), x) - v.begin();
			if (v[pos] == x) printf("%d found at %d\n", x, pos+1);
			else printf("%d not found\n", x);
		}
	}
	return 0;
}
