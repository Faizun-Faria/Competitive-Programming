#include <bits/stdc++.h>
using namespace std;
const int N = 26;
vector<int> V[N];
int max_dif[N];
int main() {
    string str;
    cin>>str;
    int l = str.length();
    for(int i=0; i<N; i++){
        V[i].push_back(0);
    }
    for(int i=0; i<l; i++){
        int num = (int)str[i]-97;
        V[num].push_back(i+1);
        int temp = (V[num][V[num].size()-1] - V[num][V[num].size()-2]);
        if(temp>max_dif[num]) max_dif[num] = temp;
    }
    for(int i=0; i<N; i++){
        V[i].push_back(l+1);
        int temp = (V[i][V[i].size()-1] - V[i][V[i].size()-2]);
        if(temp>max_dif[i]) max_dif[i] = temp;
    }
    sort(max_dif, max_dif+N);
    cout<<max_dif[0]<<"\n";

}
