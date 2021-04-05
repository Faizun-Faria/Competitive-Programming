#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int one[N],two[N],three[N];

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int l = str.length();
        memset(one,0,sizeof(one));
        memset(two,0,sizeof(two));
        memset(three,0,sizeof(three));
        for(int i=1; i<=l; i++){
            one[i]=one[i-1];
            two[i]=two[i-1];
            three[i]=three[i-1];
            if(str[i-1]=='1')one[i]+=1;
            else if(str[i-1]=='2')two[i]+=1;
            else three[i]+=1;
        }
        int hi = l;
        int lo = 2;
        while(hi>lo){
            bool flag = true;
            int mid = (hi+lo)/2;
            for(int i=1; i<=l-mid+1;i++){
                if(((one[i+mid-1]-one[i-1])>0) && ((two[i+mid-1]-two[i-1])>0) && ((three[i+mid-1]-three[i-1])>0)){
                    hi = mid;
                    flag = false;
                    break;
                }
            }
            if(flag) lo=mid+1;
        }
        if(one[l]>0 && two[l]>0 && three[l]>0) cout<<hi<<"\n";
        else cout<<0<<"\n";
    }
}
