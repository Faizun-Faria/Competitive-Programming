#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define open freopen("input.txt", "r", stdin)
int c, m,x;
bool found(int n){
    int sum=0;
    if(n<c) sum+=(c-n);
    if(n<m) sum+=(m-n);
    sum+=x;
    if((sum>=n)||((c==m)&&(m==x))) return true;
    else return false;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>c>>m>>x;
        int hi = min(c,m);
        int lo=0;
        while(hi>lo){
            int mid = (hi+lo+1)/2;
            if(found(mid)) lo=mid;
            else hi = mid-1;
        }
        cout<<lo<<"\n";
    }
}
