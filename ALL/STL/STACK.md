### STACK(LIFO)
* Last in first out
```
stack <int> s;
s.push(4);
s.pop();
int a =  s.top();
bool flag = s.empty();
int sizeOfStack = s.size();
showstack(s);
```
```
void showstack(stack <int> s) { 
    while (!s.empty()){
        cout <<  s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
}
mystack1 = {7, 5, 3, 1}
mystack2 = {8, 6, 4, 2}
mystack1.swap(mystack2);
```
