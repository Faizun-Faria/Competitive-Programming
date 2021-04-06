
#include <bits/stdc++.h>
using namespace std;

string getStrackToString(stack<string> st) {
    string str = "";
    while (!st.empty()) {
        str += st.top();
        st.pop();
        if (!st.empty()) str.push_back(' ');
    }
    return str;
}

string reverseStringByWord(string name) {
    stringstream ss(name);
    stack<string> revString;
    string word;
    while (ss >> word) {
        revString.push(word);
    }
    return getStrackToString(revString);
}

int main() {
    string name = "Faizun is a good girl";
    cout << reverseStringByWord(name) << endl;
}
