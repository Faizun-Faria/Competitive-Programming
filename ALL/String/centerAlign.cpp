<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("in.txt", "r", stdin);

    vector<string> words;
    string line;
    int maxlen = 0;

    while(getline(cin,line)){
        words.push_back(line);
        if( line.length() > maxlen) {
            maxlen = line.length();
        }
    }
    cout<<maxlen<<"\n";
    string alignedOutput="";
    for(int i = 0; i < words.size(); i++){
        int space = (maxlen - words[i].length() )/2;
        for(int j = 1; j <= space; j++){
            alignedOutput += " ";
        }
        alignedOutput += words[i];
        alignedOutput += "\n";
    }

    cout<<alignedOutput;

}
=======
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("in.txt", "r", stdin);

    vector<string> words;
    string line;
    int maxlen = 0;

    while(getline(cin,line)){
        words.push_back(line);
        if( line.length() > maxlen) {
            maxlen = line.length();
        }
    }
    cout<<maxlen<<"\n";
    string alignedOutput="";
    for(int i = 0; i < words.size(); i++){
        int space = (maxlen - words[i].length() )/2;
        for(int j = 1; j <= space; j++){
            alignedOutput += " ";
        }
        alignedOutput += words[i];
        alignedOutput += "\n";
    }

    cout<<alignedOutput;

}
>>>>>>> 14075c63b246a1cfac294d3b4e3a693f291c5dc9
