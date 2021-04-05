#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b,co=0;
    cin>>n>>a>>b;
    string s = "aaaabb";
    vector <int> v;
    do {
        int temp=n;
        co=1;
        for(int i=0; i<6; i++){
            if(s[i]=='a'){
                if(temp<a){
                    temp=n;
                    co++;
                }
                temp-=a;
            }else if(s[i]=='b'){
                if(temp<b){
                    temp=n;
                    co++;
                }
                temp-=b;
            }
        }
        v.push_back(co);
    }while(next_permutation(s.begin(), s.end()));
    sort(v.begin(), v.end());
    cout<<v[0]<<"\n";
}
