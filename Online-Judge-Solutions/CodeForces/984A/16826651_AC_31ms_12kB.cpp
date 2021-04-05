  #include <bits/stdc++.h>
  using namespace std;
  int main(){
    int number;
    cin>> number;
    int numbersOnBoard[number];
    for(int x=0;x < number;x++){
      cin>>numbersOnBoard[x];
    }
    int max,maxIndex, temp;
    for(int y=0; y< number; y++){
      max = numbersOnBoard [y];
      maxIndex = y;
      for(int x=y; x< number;x++){
        if(numbersOnBoard[x]>max){
          max = numbersOnBoard[x];
          maxIndex = x;
        }
      }
      temp = numbersOnBoard[y];
      numbersOnBoard[y] = max;
      numbersOnBoard[maxIndex] = temp;
    }
    int outNumber;
    outNumber = numbersOnBoard[number/2];
    cout<< outNumber;
    return 0;
  }