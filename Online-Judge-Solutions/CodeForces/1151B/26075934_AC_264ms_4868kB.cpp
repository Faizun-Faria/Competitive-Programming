#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,t;
    cin>>n>>m;
    vector <int> v[n];
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>t;
            v[i].push_back(t);
            if(j==0) ans = ans^v[i][j];
        }
    }
    if (ans != 0){
        cout<<"TAK\n";
        for(int i=0; i<n; i++){cout<<1<<" ";}
        cout<<"\n";
        return 0;
    }else{
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(v[i][j]!=v[i][0] && (ans^v[i][j]^v[i][0])!=0 ) {
                    cout<<"TAK\n";
                    for(int k=0; k<n; k++){
                        if(k != i){cout<<1<<" ";}
                        else {cout<<(j+1)<<" ";}
                    }
                    cout<<"\n";
                    return 0;
                }
            }
        }
    }
    cout<<"NIE\n";
}
