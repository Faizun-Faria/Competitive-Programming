/*
Take some books name and number of pages, sort and print them by page descending order. If page number is the same, then by name ascending lexicographically.
*/

#include <bits/stdc++.h>
using namespace std;
#define pii pair <int, string>
vector <pair<int,string>> pageName;

bool cmp(pii a, pii b) {
   if (a.first == b.first) return a.second < b.second;
   return a.first > b.first;
}

int main(){
   //freopen("in.txt","r", stdin);
   int ins;
   cin>>ins;

   int page;
   string name;
   for (int i = 0; i < ins; i++){
       cin>>name>>page;
       pageName.push_back(make_pair(page, name));
   }
   sort(pageName.begin(), pageName.end(), cmp);
   for (int i = 0; i < ins; i++){
       cout<<pageName[i].first<<" "<<pageName[i].second<<"\n";
   }
}
