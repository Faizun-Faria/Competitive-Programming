#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include<sstream>
using namespace std;
const int N = 1e5;
char side ='|';
char dash = '-';
char pluss = '+';
char corner = '@';
char space = ' ';
vector <string> grid[N];
int mx[N];
int col,ro;
void print(char c, int n) {
    for(int i=0; i<n; i++) {
        cout<<c;
    }
}

void print_FL() {
    for(int i=0; i<col; i++) {
        if(i==0){
            print(corner,1);
        }
        print(dash,mx[i]+2);
        if(i==col-1) {
            print(corner,1);
            cout<<"\n";
        } else
            print(dash,1);
    }
}
void print_und() {
    for(int i=0; i<col; i++) {
        if(i==0){
            print(side,1);
        }
        print(dash,mx[i]+2);
        if(i==col-1) {
            print(side,1);
            cout<<"\n";
        } else
            print(pluss,1);
    }
}
void print_data_left(int r,int c){
    print(side,1);
    print(space,1);
    cout<<grid[r][c];
    print(space, mx[c]-grid[r][c].length()+1);
}

void print_data_right(int r,int c){
    print(side,1);
    print(space,1);
    print(space, mx[c]-grid[r][c].length());
    cout<<grid[r][c];
    print(space,1);
}

void print_data_mid(int r,int c){
    print(side,1);
    print(space,1);
    int sp = (mx[c]-grid[r][c].length());
    print(space, sp/2);
    cout<<grid[r][c];
    print(space, (sp+1)/2);
    print(space,1);

}

int main() {
    string str,st;
    int cnt;
    while(getline(cin,str) ) {
        if(str[0]=='>'||str[0]=='<'||str[0]=='='||str[0]=='*') {
            if(grid[0].size()>0) {
                ro=cnt;
                print_FL();
                for(int i=0; i<ro; i++) {
                    for(int j=0; j<col; j++){
                        if(st[j]=='<') {
                            print_data_left(i,j);
                        }else if(st[j]=='>'){
                            print_data_right(i,j);
                        }else{
                            print_data_mid(i,j);
                        }
                    }
                    print(side,1);
                    cout<<"\n";
                    if(i==0) print_und();
                }
                print_FL();



            }
            memset(mx,0,sizeof(mx));
            for(int k=0; k<ro; k++){
                grid[k].clear();
            }
            col = str.length();
            st=str;
            cnt=0;
            if(str[0]=='*') break;
        } else {
            int i=0;
            stringstream ss(str);
            while(ss.good()) {
                string substr;
                getline(ss, substr, '&');
                grid[cnt].push_back(substr);
                int len = substr.length();
                if(mx[i]<len)
                    mx[i]=len;
                i++;
            }
            cnt++;
        }
    }

}
