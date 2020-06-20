#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mx = 1e7;
ll arr[mx+5];

void seive(){
	arr[0]=arr[1]=1;
	for(int i=2; i*i<mx; i++){
		if(arr[i]==0){
			for(int j=i*i; j<mx; j+=i){
				arr[j]=1;
			}
		}
	}
}

int main() {
	seive();
	return 0;
}
