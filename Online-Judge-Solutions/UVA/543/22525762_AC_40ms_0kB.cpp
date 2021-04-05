#include <bits/stdc++.h>
using namespace std;
const int mx = 1e6+5;
int arr[mx];
void isPrime(){
  for(int i=2; i*i<mx; i++){
      if(arr[i]==0){
        for(int j=2*i; j<=mx; j+=i){
          arr[j]=1;
        }
      }
  }
}
int main() {
  isPrime();
  int a, x, y;
  while (cin>>a && a){
    for(int i = 2; i <= (a/2); i++) {
    	if (!(arr[i] + arr[a-i])) {
    		x = i, y = a-i;
    		break;
    	}
    }
    printf("%d = %d + %d\n", a, x, y);
  }
}