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
