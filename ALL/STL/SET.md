### SET
* Auto sorted in ascending sort
* Takes only the unique values

```
set <string> st;
set <string> ::iterator itr;

for(itr = st.begin(); itr!=st.end(); itr++){
	cout<<"Element "<<*itr<<endl;
}
```
* To serially access all the elements
```
set <string> st;
for(int x:st){
    cout<<x<<" ";
}
```
* Sort
```
struct cmp {
   bool operator() (const int& l, const int& r) {
       return l < r;
   }
};

int main() {
	set <int> st1; // normal ascending sort
	set <int, cmp> st2; // descending sort
	st1.insert(4);
	st1.insert(1);
	st1.insert(67);
	st1.insert(4);
	st2.insert(4);
	st2.insert(1);
	st2.insert(67);
	st2.insert(4);
	set <int>::iterator it;
	for (it = st1.begin(); it != st1.end(); it++) cout << *it << endl;
}

```
