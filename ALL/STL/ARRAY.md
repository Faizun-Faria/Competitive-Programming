### ARRAY
* Size of array
```
s = sizeof(arr)/sizeof(arr[0]);
```
* Sorting an array (ascending)
```
sort(array_name, array_name+sizeOfArray);
```
* Sorting an array (descending)
```
bool comp(int x, int y){
	if(x>y) return true;
	return false;
}
int main() {
	int arr[10]= {1,2,5,3,4,2,8,34,1,2};
	sort(arr, arr+10, comp);
}
```
* Memset
```
memset(array_name, 0 , sizeof(array_name)); // to initialize an array
```
* First and last elemnt
```
int arr [10] = {1,2,3,4,5,6,7,8,9,10};
cout<<arr.front(); //1
cout<<arr.back(); //10
arr.fill(20); // {20,20,20,20,20,20,20,20,20,20}
```
