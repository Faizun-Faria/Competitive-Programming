#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    string s = "aaaabb"; // always start with the lexicographically smallest one
    do {
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));
 
    return 0;
}
