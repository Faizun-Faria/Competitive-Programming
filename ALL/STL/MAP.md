### MAP
* Can count the number of occurance
```
map <string , int> mp;
mp["Canada"] =5;
mp["BD"]++;
map <string, int> ::iterator itr;
for(itr = mp.begin(); itr!=mp.end(); itr++){
	cout<<itr -> first<<"\t"<<itr->second<<endl; //first ----key, second ----value
}
```
* 
```
if (mp[key]==0)
```
* 
```
map <string, int, greater<string>> mp;
```
