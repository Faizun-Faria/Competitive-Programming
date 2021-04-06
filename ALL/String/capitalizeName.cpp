<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

/*
faizun faria ---> Faizun Faria
first letter
letter after space


*/


bool isUpper(char c){
    bool flag = false;
    if(c >= 'A' && c <= 'Z') flag = true;
    return flag;
}


bool isLower(char c){
    bool flag = false;
    if(c >= 'a' && c <= 'z') flag = true;
    return flag;
}

string capitalize(string line){
    if(isLower(line[0])) line[0] -= ('a'- 'A');
    for(int i = 1; i < line.length(); i++){
        if(line[i-1] == ' ')    line[i] -= ('a'- 'A');

        else line[i] = tolower(line[i]);
    }
    return line;
}


int main(){
    freopen("input.txt", "r", stdin);
    string line;
    getline(cin,line);

    line = capitalize(line);
    cout<<line;
}
=======
#include <bits/stdc++.h>
using namespace std;

/*
faizun faria ---> Faizun Faria
first letter
letter after space


*/


bool isUpper(char c){
    bool flag = false;
    if(c >= 'A' && c <= 'Z') flag = true;
    return flag;
}


bool isLower(char c){
    bool flag = false;
    if(c >= 'a' && c <= 'z') flag = true;
    return flag;
}

string capitalize(string line){
    if(isLower(line[0])) line[0] -= ('a'- 'A');
    for(int i = 1; i < line.length(); i++){
        if(line[i-1] == ' ')    line[i] -= ('a'- 'A');

        else line[i] = tolower(line[i]);
    }
    return line;
}


int main(){
    freopen("input.txt", "r", stdin);
    string line;
    getline(cin,line);

    line = capitalize(line);
    cout<<line;
}
>>>>>>> 14075c63b246a1cfac294d3b4e3a693f291c5dc9
