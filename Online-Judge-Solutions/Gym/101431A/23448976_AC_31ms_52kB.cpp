#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int n;
    cin>>n;
    string str;
    cin>>str;
    string arr[3];
    arr[0] = "***";
    arr[1] = "*.*";
    arr[2] = "*..";
    string str1="",str2="",str3="",str4="",str5="";
    for(int i=0; i<str.length(); i++){
            str1+="***";
        if(str[i]=='A'){
            str2+=arr[1];
            str3+=arr[0];
            str4+=arr[1];
            str5+=arr[1];
        }else if(str[i]=='B'){
            str2+=arr[1];
            str3+=arr[0];
            str4+=arr[1];
            str5+=arr[0];
        }else if(str[i]=='C'){
            str2+=arr[2];
            str3+=arr[2];
            str4+=arr[2];
            str5+=arr[0];
        }else if(str[i]=='D'){
            str2+=arr[1];
            str3+=arr[1];
            str4+=arr[1];
            str5+=arr[0];
        }else if(str[i]=='E'){
            str2+=arr[2];
            str3+=arr[0];
            str4+=arr[2];
            str5+=arr[0];
        }

    }
    cout<<str1<<"\n"<<str2<<"\n"<<str3<<"\n"<<str4<<"\n"<<str5<<"\n";

}

