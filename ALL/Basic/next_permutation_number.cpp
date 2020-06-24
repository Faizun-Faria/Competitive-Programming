#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 100;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector <int> v = {1,2,3,4,5};
    do {
        for(int x : v) cout<<x<<" ";
        cout<<endl;
    }while(next_permutation(v.begin(),v.end()));
    return 0;
}
