#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x1,y1,x2,y2,m,x,y;
	cin>>t;
	for(int i=1; i<=t; i++){
		cout<<"Case "<<i<<":\n";
		cin>>x1>>y1>>x2>>y2>>m;
		while(m--){
			cin>>x>>y;
			if((x>=x1 && x<=x2) &&(y>=y1 && y<=y2)){
				cout<<"Yes\n";
			}else cout<<"No\n";
		}
	}
}