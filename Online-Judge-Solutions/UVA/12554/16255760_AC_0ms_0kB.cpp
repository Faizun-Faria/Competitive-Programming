#include <bits/stdc++.h>
using namespace std;
int main(){
	int testCase,count, index,t;
  cin >> testCase;
	t = testCase;
  string song[16] = {"Happy", "birthday", "to", "you" , "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
	char name[t][101];
    
	for(int x =0; x<t;x++){
		cin>>name[x];
	}
	count =0;
	index =0;
	while (t>16){
		count++;
		t -= 16;
	}
	for(int x =0; x<=count; x++ ){
		for(int y=0; y<16; y++ ){
			
		  cout<<name[index] <<": "<<song[y]<<endl;
			index++;
      if(index>(testCase-1)) index=0;
		}
	}
	return 0;
}
