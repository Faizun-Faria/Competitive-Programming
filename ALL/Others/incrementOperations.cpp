#include <bits/stdc++.h>
using namespace std;
int main(){
    int x = 6;
    printf("%d %d %d %d\n", x++, --x, x, x++);
    printf("%d %d %d %d %d\n", ++x, --x, x, x++, ++x);
    printf("%d ", ++x);

    int i = 10;
    int x = ++i + i++;
    cout<<i<<"  "<<x;
}
