### DIGITWISE MANIPULATION

```
int l=0; count1=0;
int a = 1000;
while(condition){
  int n = a%10;
  l+=pow(10,count1)*n;
  count1++;
}
```

### EVEN ODD CHECKING
```
if(num & 1) cout<<"ODD";
else cout<<"EVEN";
```
### FLOOR AND CEIL
```
double x;
int k = floor(x);
int l = ceil(x);
```
### GCD
```
__gcd(a,b); //here a and b is integer
```
### LCM
```
lcm = (a.b)/gcd(a,b);
```
### MODULAR ARITHMETIC
```
(a+b)%m = ( (a%m) + (b%m) ) % m;
(a.b)%m = ( (a%m) . (b%m) ) % m;
(a-b)%m = ( (a%m) - (b%m) + m ) % m;
```
* very long calculation but the input and output can be taken within long long
```
long long a,b;
cin>>a>>b;
__int 128 c=a, d=b;
__int 128 e = (c*d)%(2^63)
a= e; //can't be printed directly
cout<<a<<"\n";
```
### MOST SIGNIFICANT DIGIT
```
double k = log10(n);
k = k - floor(k);
int x = pow(10,k); //x is the most significant digit
```
### MULTIPLICATIONAND DIVISION BY 2
```
n=n<<1; //multiply
n=n>>1; //division
```
### NUMBER OF DIGITS
```
int digits = floor(log10(n))+1;
```
### POWER OF 2 CHECKING
```
bool isPowerOfTwo(int x){
  return x && (!(x&(x-1)));
}
```
### SQUARE ROOT
```
int n=9;
int ans = (int) (pow(n,0.5)); //ans will be 3
```

### SWAP 
```
a=a+b;
b=a-b;
a=a-b;


a=a^b;
b=a^b
a=a^b
```
