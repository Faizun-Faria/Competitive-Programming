#include <bits/stdc++.h>
using namespace std;

int main(){
int n, m;
cin>>n>>m;
string s;
int count1=0;
int mx =0;
for(int i=0; i<n; i++){
        cin>>s;
        if(i%2==0){
            for(int j=0; j<m; j++){
                if(s[j]=='.') count1++;
                else if(s[j]=='L'){
                    mx= max(count1,mx);
                    count1=0;
                }
            }
        }else{
            for(int j=m-1; j>=0; j--){
                if(s[j]=='.') count1++;
                else if(s[j]=='L'){
                    mx= max(count1,mx);
                    count1=0;
                }

            }
       }
}
cout<<mx<<endl;
return 0;
}
