### ASCII VALUE
```
A -> 65    Z -> 90  a -> 97  z -> 122
```
### BASIC SCELETON
```
#include <bits//stdc++.h>
using namespace std;
const int N = 1e4;
#define open freopen("input.txt", "r", stdin)
#define ll long long int
#define arrayclear(a) memset(a, 0, sizeof(a))
#define vectorclear(v) v.clear()
#define setclear(s) s.clear()
#define abs(x) ((x)<0? -(x):(x))
#define vsort(v) sort(v.begin(), v.end())
#define vrev(v) reverse(v.begin(),v.end())
#define pi a*cos(-1.0)
#define m(mp) map<int,int> mp
#define s(st) set <int> st
#define p pair <int, int>
#define pair(x,y) make_pair(x,y)
#define arraysize(a) sizeof(a)/sizeof(a[0])
#define asort(a,n) sort(a, a+n),
#define arev(a,n) sort(a, a+n, greater<int>())
int main(){
  ios_base::sync_with_stdio(false);//if we write these two lines can't use scanf and printf
  cin.tie(NULL);
  //code
}
```

## Things To Know

* Array size 10^7 if declared globally
* Array size 10^6 if declared locally
* 1e4 means 10000
* Use "\n" instead of "endl"
* Big Integer is not important at all
* Highest array size 10^6
* Integer range 2 . 10^9
* Long long range 9 . 10^18
* String can take more than 10^18
* Pow should be avoided because it creates precision problem
* Define array size 5 index more than it's needed
* PI is acos(0.0)
* 1<<1 means 
* Bitwise operation is faster
* To find out the divisors of a number, we need to run a loop upto root of that number
* Loop can run upto 10^8 
* Python is good for big number manipulation
