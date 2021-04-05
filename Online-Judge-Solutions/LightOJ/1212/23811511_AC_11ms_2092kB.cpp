#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,m, num;
	cin>>t;
	for(int i=1; i<=t; i++){
		deque <int> deq;
		cout<<"Case "<<i<<":\n";
		cin>>n>>m;
		string str;
		while(m--){
			cin>>str; 
			if(str=="pushLeft") {
				cin>>num;
				if(deq.size()<n){
					deq.push_front(num);
					cout<<"Pushed in left: "<<num<<"\n";
				}else cout<<"The queue is full\n";
			}
			else if(str== "pushRight"){
				cin>>num;
				if(deq.size()<n){
					deq.push_back(num);
					cout<<"Pushed in right: "<<num<<"\n";
				}else cout<<"The queue is full\n";
			}else if(str == "popLeft"){
				if(deq.size()>0){
					cout<<"Popped from left: "<<deq[0]<<"\n";
					deq.pop_front();
				}else{
					cout<<"The queue is empty\n";
				} 
				
			}else if(str == "popRight"){
				if(deq.size()>0){
					cout<<"Popped from right: "<<deq[deq.size()-1]<<"\n";
					deq.pop_back();
				}else{
					cout<<"The queue is empty\n";
				} 
				
			}
		}
	}
}