#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int numOfStar = num/2;
    int numOfD = 1;
    for(int i=0; i<=num/2; i++){
        for(int j=0; j<numOfStar; j++){
            cout<<"*";
        }
        for(int j=0; j<numOfD; j++){
            cout<<"D";
        }

        numOfD+=2;
        for(int j=0; j<numOfStar; j++){
            cout<<"*";
        }
        cout<<"\n";
        numOfStar-=1;
    }
    numOfStar+=2;
    numOfD-=2;
    for(int i=0; i<num/2; i++){

        for(int j=0; j<numOfStar; j++){
            cout<<"*";
        }
        numOfD-=2;
        for(int j=0; j<numOfD; j++){
            cout<<"D";
        }


        for(int j=0; j<numOfStar; j++){
            cout<<"*";
        }
        numOfStar+=1;
        cout<<"\n";
    }

return 0;
}
