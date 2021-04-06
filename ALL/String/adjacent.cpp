<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
/*
AABCCC
cnt = 4

*/
int printAdjacent(){
    string str;
    cin>>str;
    int cnt = 0;
    for(int i = 0; i < str.length() -1; i++){
        if(str[i] == str[i+1]) cnt++;
        else cout << str[i] ;
    }
    cout<<str[str.length() - 1];
    cout<<" "<<cnt<<"\n";
}

int main(){
    freopen("input.txt", "r", stdin);
    int testCase;
    cin >> testCase;
    for(int i =0; i < testCase; i++){
        printAdjacent();
    }
}
=======
#include <bits/stdc++.h>
using namespace std;
/*
AABCCC
cnt = 4

*/
int printAdjacent(){
    string str;
    cin>>str;
    int cnt = 0;
    for(int i = 0; i < str.length() -1; i++){
        if(str[i] == str[i+1]) cnt++;
        else cout << str[i] ;
    }
    cout<<str[str.length() - 1];
    cout<<" "<<cnt<<"\n";
}

int main(){
    freopen("input.txt", "r", stdin);
    int testCase;
    cin >> testCase;
    for(int i =0; i < testCase; i++){
        printAdjacent();
    }
}
>>>>>>> 14075c63b246a1cfac294d3b4e3a693f291c5dc9
