#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int cnt[N];
int main(){
    //freopen("input.txt", "r", stdin);
    int t; int len;
    cin>>t;
    char start[4]={'<', '(', '{', '[' };
    char endd[4]={'>', ')', '}', ']' };
    for(int j = 1; j <= t; j++){
        string str;
        cin>>str;
        len = str.length();
        stack <int> num;
        stack <char> br;
        int pos[len];
        memset(pos,0,sizeof(pos)); memset(cnt,0,sizeof(cnt));
        for(int i = len-1; i >= 0; i--){
            if(str[i]==endd[0]||str[i]==endd[1]||str[i]==endd[2]||str[i]==endd[3]){
                br.push(str[i]);
                num.push(i);
            }else if(!br.empty()){
                if((str[i]==start[0]&&br.top()==endd[0])||(str[i]==start[1]&&br.top()==endd[1])||(str[i]==start[2]&&br.top()==endd[2])||(str[i]==start[3]&&br.top()==endd[3])){
                    pos[i] = num.top();
                    cnt[i] = num.top()-i+1;
                    cnt[i]+= cnt[pos[i]+1];
                    br.pop();
                    num.pop();
                }else {
                     br.push(str[i]);
                    num.push(i);
                }
            }
        }
        cout<<"Case "<<j<<":\n";
        for(int i = 0; i < len; i++){cout<<cnt[i]<<"\n";}
    }
}
