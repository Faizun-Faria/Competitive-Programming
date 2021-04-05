#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int num2 = num*2;
    int arr[num2];
    int total;
    for(int i=0; i<num2; i++){
        cin>>arr[i];
    }
    int s = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+s);
    priority_queue <int> pq;
    for(int i=0,j=s-1; i<num; i++,j--){
        total = arr[i]+ arr[j];
        pq.push(total);
    }
    int n[2];
    n[0] = pq.top();
    for(int i=0; i<num-1; i++){
        pq.pop();
    }
    n[1] = pq.top();
    int mi = n[0] - n[1];
    cout<<mi<<endl;
    return 0;
}
