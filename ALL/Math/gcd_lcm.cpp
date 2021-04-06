#include <bits/stdc++.h>
using namespace std;

int gcd(int m, int n) {
   if (m == 0) return n;
   return gcd(n%m, m);
}

int lcm(int m, int n) {
   return (n * m) / gcd(n, m);
}

int main() {
   cout << gcd(10, 12) << endl;
   cout << lcm(10, 12) << endl;
}

/*

10 12
2 10
0 2

*/
