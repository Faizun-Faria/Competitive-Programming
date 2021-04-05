#include <bits//stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	string arr [t];
	for(int i=0; i<t; i++){
		cin>>arr[i];
	}
	string song[16] = {"Happy", "birthday", "to", "you", "Happy", "birthday", 
	"to", "you","Happy", "birthday", "to", "Rujia","Happy", "birthday", "to", 
	"you"};
	int num =floor(t/16)+1;
	int j=0;
	while(num--){
		for(int i=0; i<16; i++){
			cout<<arr[j++%t]<<": "<<song[i]<<"\n";
		}
	}
	
	return 0;
}