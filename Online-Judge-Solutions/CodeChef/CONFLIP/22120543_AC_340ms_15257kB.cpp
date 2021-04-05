#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
	cin>>testCase;
	int numberOfGames;
	for(int i=0; i<testCase; i++){
		cin>>numberOfGames;
		for(int j=0; j< numberOfGames; j++){
			int i,n,q;
			cin>>i>>n>>q;
			if((i!=q)&&(n%2!=0)) cout<< n/2+1<<endl;
			else cout<< (n/2)<<endl;
		}
	}
	return 0;
}