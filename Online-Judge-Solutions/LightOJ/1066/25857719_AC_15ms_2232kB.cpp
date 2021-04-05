#include <bits/stdc++.h>
using namespace std;

const int N = 11;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int n,rr, cc,temp,ans;
int grid[N][N];
vector <int> letter_x,letter_y,v;
queue <int> q_x,q_y;
map <int, pair<int, int>> mp;
int vis[N][N];
int par[N][N];

bool bfs(){
    while(!q_x.empty()){
        vis[q_x.front()][q_y.front()]=1;
        for(int i=0; i<4; i++){
            int xx = q_x.front()+dx[i];
            int yy = q_y.front()+dy[i];

            if(xx>=0 && xx<n && yy>=0 && yy<n && vis[xx][yy]==0){
                par[xx][yy] = par[q_x.front()][q_y.front()]+1;
                if(grid[xx][yy]){
                    q_x.push(xx);
                    q_y.push(yy);
                 if(xx == letter_x[temp+1] && yy == letter_y[temp+1])  {
                    ans+=par[xx][yy];
                        while(!q_x.empty()){
                            q_x.pop();
                            q_y.pop();
                        }
                    return true;
                    }
                }
                }

        }
        q_x.pop();
        q_y.pop();
        if(q_x.empty()){
            return false;
        }

    }
}

int main(){
    
    int t;
    string str;
    cin>>t;
    for(int i=1; i<=t; i++){
        int co = 0;
        ans=0;
        cin>>n;
        for(int j=0; j<n; j++){
            cin>>str;
            for(int k=0; k<n; k++){
                if(str[k]=='.'){
                    grid[j][k]= true;
                }
                if(str[k]!='.' && str[k]!='#'){
                    int num =  (int)str[k] - (int)'A';
                    mp[num]= make_pair(j,k);
                    co++;
                }
            }
        }

        for(int j=0; j<co; j++){
            letter_x.push_back(mp[j].first);
            letter_y.push_back(mp[j].second);
        }
        mp.clear();
        bool flag=false, imp=false;

        for(int j=0;j<co-1; j++){
            par[letter_x[j]][letter_y[j]]= 0;
            q_x.push(letter_x[j]);
            q_y.push(letter_y[j]);
            temp=j;
            grid[letter_x[j]][letter_y[j]]=true;
            grid[letter_x[j+1]][letter_y[j+1]]=true;
            memset(par,0, sizeof(par));
            memset(vis,0,sizeof(vis));
            flag = bfs();
            if(!flag){
                cout<<"Case "<<i<<": "<<"Impossible"<<"\n";
                imp = true;
                break;
            }
        }
        memset(grid,0, sizeof(grid));
        if(flag){
            cout<<"Case "<<i<<": "<<ans<<"\n";
        }else if(!imp){
            cout<<"Case "<<i<<": "<<ans<<"\n";
        }
        letter_x.clear();
        letter_y.clear();
    }
}
