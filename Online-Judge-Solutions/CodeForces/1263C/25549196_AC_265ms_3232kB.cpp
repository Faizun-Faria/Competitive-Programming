#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    vector <ll> v;
    set <ll> s;
    int t;
    ll num;
    cin>>t;
    while(t--) {
        cin>>num;
        s.insert(0);
        for(int i=1; i*i<=num; i++) {
            s.insert(i);
            s.insert(num/i);
        }
        v.assign( s.begin() , s.end() );
        cout<<v.size()<<"\n";
        for(int i=0; i<v.size()-1; i++) {
            cout<<v[i]<<" ";
        }
        cout<<v[v.size()-1]<<"\n";
        v.clear();
        s.clear();
    }
}
