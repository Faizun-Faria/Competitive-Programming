#include <bits/stdc++.h>
using namespace std;
class myQueue{
public:
    int *arr;
    int head=0;
    int tail=-1;
    int cnt=0;

    myQueue(int sz){
        arr = new int[sz];
    }
    void enqueue(int val){
        if(cnt<10){
            arr[++tail%10]=val;
            cnt++;
        }else{
            printf("Queue is full");
        }

    }
    void dequeue(){
        if(!isEmpty()){
            head++;
            head%=10;
            cnt--;
        }else{
            printf("Queue is empty");
        }
    }
    int peek(){
        if(!isEmpty()){
            printf("%d ",arr[head]);
        }else{
            printf("Queue is empty");
        }

    }
    bool isEmpty(){
        if(cnt>0) return false;
        else return true;
    }

} ;
int main(){
    myQueue q(10);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.peek();
    q.dequeue();
    q.peek();
    q.enqueue(4);
    q.dequeue();
    q.peek();

}
