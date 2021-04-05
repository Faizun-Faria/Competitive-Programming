#include <bits//stdc++.h>
using namespace std;
int main(){
    int pt =1;
    int n,m;
    cin>>n>>m;
    int k =1;
    while(k<=n){
        if(k%2!=0){

            for(int i=0; i<m; i++){
                cout<<"#";

            }
            cout<<"\n";
        }else{
            if(pt%2!=0){
                for(int i=0; i<m-1; i++){
                    cout<<".";

                }
                cout<<"#"<<"\n";

            }else {
                cout<<"#";
                for(int i=0; i<m-1; i++){
                    cout<<".";

                }
                cout<<"\n";


            }
            pt++;


        }
        k++;


    }
    return 0;
}
