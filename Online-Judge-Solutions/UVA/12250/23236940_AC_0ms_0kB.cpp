#include <bits/stdc++.h>
using namespace std;
int main(){
    string arr[6]={"HELLO","HOLA","HALLO","BONJOUR","CIAO","ZDRAVSTVUJTE"};
    string arr2[6]={"ENGLISH","SPANISH","GERMAN","FRENCH","ITALIAN","RUSSIAN"};
    string str;
    int num = 1;
    while (cin>>str && str!= "#"){
    bool flag = false;
        for(int i=0; i<6; i++){
            if(str==arr[i]){
               flag = true;
              cout<<"Case "<<num<<": "<<arr2[i]<<"\n";
            }
        }
        if (!flag) cout<<"Case "<<num<<": "<<"UNKNOWN"<<"\n";
        num++;
    }
}
