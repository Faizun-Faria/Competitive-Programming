#include <bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2){
    int l1 = s1.length();
    int l2 = s2.length();
    int dp[l1+1][l2+1];
    for(int i = 0; i <= l1; i++) dp[i][0] = 0;
    for(int i = 0; i <= l2; i++) dp[0][i] = 0;

    for(int i = 1; i <= l1; i++){
        for(int j = 1; j <= l2; j++){
            if(s1[i-1] == s2[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    for(int i = 1; i <= l1; i++){
        for(int j = 1; j <= l2; j++){
                    cout<< dp[i][j]<<"   ";
        }cout<<endl;
    }
    return dp[l1][l2];
}

int main(){
    freopen("input.txt", "r", stdin);
    string s1, s2;
    cin >> s1 >> s2;
    cout << lcs(s1, s2) << "\n";
}
