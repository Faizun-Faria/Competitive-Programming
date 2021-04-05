#include <bits/stdc++.h>
using namespace std;
#define open  freopen("input.txt", "r", stdin)
#define arrayclear(a)  memset(a, 0, sizeof(a))
const int N=2e5 + 100;
int l[N];
int main(){
    int t;
    cin>>t;
    string str;
    while(t--){
        int mx = 0;
        cin>>str;
        if(str[0]=='L') {
            l[0]++;
            mx++;
        }
        for(int i=1; i<str.length(); i++){
            l[i]= l[i-1];
            if(str[i]=='L') l[i]++;
            else l[i]=0;
            if(mx<l[i]) mx = l[i];
        }
        arrayclear(l);
        cout<<mx+1<<"\n";
    }

}
