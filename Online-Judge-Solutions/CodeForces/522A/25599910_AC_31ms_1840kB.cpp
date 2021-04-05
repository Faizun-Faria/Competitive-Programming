#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

vector<int> G[N];
bool vis[N];
int depth[N];

int u,v,num=1;
map <string,int> mp;

void stringToInt(string s1, string s3){
    if(s1=="polycarp") mp[s1]=1;
    else if(s3=="polycarp") mp[s3]=1;
    if(mp[s1]==0) mp[s1]=++num;
    u = mp[s1];
    if(mp[s3]==0) mp[s3]=++num;
    v = mp[s3];
}


void dfs(int u, int d) {
    vis[u] = 1;
    depth[u] = d;
    for(int i = 0; i < G[u].size(); i++) {
        v = G[u][i];
        if(vis[v] == 0) {
            dfs(v, d+1);
        }
    }
}


int main() {
    int n;
    cin >> n;
    set <int> st;
    for(int i = 1; i <= n; i++) {
        string str1,str2,str3;
        cin>>str1>>str2>>str3;
        transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
        transform(str3.begin(), str3.end(), str3.begin(), ::tolower);
        stringToInt(str1, str3);
        st.insert(u);
        st.insert(v);
        G[u].push_back(v);
        G[v].push_back(u);
    }
    dfs(1, 1);
    int mx = 0;
    for(int i : st) {
         if(depth[i]>mx) mx = depth[i];
    }
    cout<<mx<<"\n";
    return 0;
}
