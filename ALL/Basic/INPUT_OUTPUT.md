### INPUT AND OUTPUT
```
int %d
char %c
double %lf
float %f
string %s
long long %lld
```
* To print 4 digits after decimal point
```
double d = 2.34567890;
printf("%.4lf", d);
```
* Input (string as word)
```
while(cin>>s)
```
* Input (string as line)
```
while(getline(cin,s))
```
* Take input while you get any word
```
string str;
while(cin>>str){
}
```
* Take input while you get any line
```
string str;
while(getline(cin, str)){
}
```
* Take input while you don't get a 0
```
int i;
while (cin>>i && i){
}
```
```
int i;
cin>>i;
cout<<(i==2? "YES" : "NO");
```
