#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define open freopen("input.txt", "r", stdin)
const int N = 2e5+10;
int teacher[N],student[N];
vector <int> dif;
int n;
int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>teacher[i];
    }
    for(int i=0; i<n; i++){
        cin>>student[i];
        dif.push_back(teacher[i] - student[i]);
    }
    sort(dif.begin(), dif.end());
    int s = dif.size();
    ll sum =0;
    for(int i=0; i<n; i++){
        int pos = upper_bound(dif.begin(), dif.end(), (-dif[i]))-dif.begin();
        if ((pos<=i) && (pos!=s)) pos++;
        sum += (ll)(s-pos);
    }
    cout<<(sum/2)<<endl;

}
