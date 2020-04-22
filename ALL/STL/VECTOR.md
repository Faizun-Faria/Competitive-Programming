### Vector
* Can get value of a particular index
* Can insert in the back
* Not sorted
* No size

```
vector <data_type> v;
int sizeOfVector = v.size();
v.push_back(12); //Insert
int first = v.front();
int last = v.back();
int fifthElement = v[4]; //Vector index start from zero
v.empty()? cout<<"vector is empty"<<endl :  cout<<"vector is not empty"<<endl;
v.pop_back(); // delete last value of the vector
```
* Swap two vector
```
swap(v1, v2); 
```
* Sort
```
sort(v.begin(), v.end()); //ascending 
sort(v.rbegin(), v.rend()); //descending
```
* Remove
```
v.clear() //vector clear
v.erase(v.begin(), v.end()); //remove all the elements
* Index wise element removing  
v = {1,2,3,4,5,6,7}
int iterator1 = 2;
int iterator2 = 4; 
v.erase(iterator1);
v = {1,2,4,5,6,7}
v.erase(2,4); // Erase from index 2 to 4
v = {1,2,7}
```
* Printing elements in both ascending and descending order
```
vector <int> v;
vector <int> :: iterator it1;
vector<int> :: reverse_iterator it2;
for(it1 = v.begin(); it1!=v.end(); it1++) cout<< *it1<<" ";
cout<<"\n";
for(it2 = v.rbegin(); it2!=v.rend(); it2++) cout<< *it2<<" ";
cout<<"\n";
```
* assigning same value multiple times
```
vector<int> vec;
v1.push_back(32);
v.assign(3, 20); // Clear the vector and the insert element 20 into vector 3 times
v.push_back(30); // v={20,20,20,30}
```
* Copying some elements of one vector to another
```
vector<int> vec2;
vector <int> ::iterartor it;
it = vec.begin();
vec2.assign(it+1, vec.end());
for(int i=0; i<vec2.size(); i++){
	cout<<vec2[i]<<" ";
}
```
* Inserting into any index
```
vector <int> vec3(3, 10);
vector<int > ::iterator it;
it = vec3.begin();
it = vec3.insert(it, 20); //inserting into first index
for(int i=0; i<vec3.size(); i++){
	cout<<vec3[i]<<" ";
}
```
* No duplicate (Vector must be sorted beforehand)
```
v.erase( unique( v.begin() , v.end() ) , v.end() );
```

* Without sorting finding the minimum element
```
min_element( v.begin() , v.end() );
````
