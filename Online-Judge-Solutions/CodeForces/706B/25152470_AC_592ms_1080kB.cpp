#include <bits/stdc++.h>
using namespace std;
int n, q, x;
vector <int> price;
int numOfShops(int value){
    int pos = upper_bound(price.begin(), price.end(), value)-price.begin();
    return pos;
}

int main(){
    //freopen("input.txt","r", stdin);
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        price.push_back(x);
    }
    sort(price.begin(), price.end());
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>x;
        cout<<numOfShops(x)<<"\n";
    }

}
