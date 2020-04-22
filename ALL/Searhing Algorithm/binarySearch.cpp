#include <bits/stdc++.h>
using namespace std;

bool ok(int x) {
}

int main() {

    int lo = 1, hi = inf;

    /// variant - 1
    while(hi > lo) {
        int mid = (hi+lo)/2;
        if(ok(mid)) hi = mid;
        else lo = mid+1;
    }


    /// variant - 2
    while(hi > lo) {
        int mid = (hi+lo+1)/2;
        if(ok(mid)) lo = mid;
        else hi = mid-1;
    }

    return 0;
}
