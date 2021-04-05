#include <bits/stdc++.h>
using namespace std;
int n, m, x;
vector <int> wormth;
int numOfPiles(int value){
    int pos = lower_bound(wormth.begin(), wormth.end(), value)-wormth.begin();
    return pos;
}

int main(){
    //freopen("input.txt","r", stdin);
    cin>>n;
    wormth.push_back(0);
    for(int i=1; i<=n; i++){
        cin>>x;
        x += wormth[i-1];
        wormth.push_back(x);
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>x;
        cout<<numOfPiles(x)<<"\n";
    }

}
