#include <bits/stdc++.h>
using namespace std;
void enqueue(int val, stack<int>* enq){
    enq->push(val);
}
void dequeue(stack<int>* enq, stack <int>* deq){
    if(deq->empty()){
        while(!enq->empty()){
            deq->push(enq->top());
            enq->pop();
        }
    }
    if(deq->empty()){
        printf("Queue is empty\n");
    }else{
        cout<<deq->top()<<"\n";
        deq->pop();
    }
}
int main(){
    int n,insT,val;
    cin>>n;
    stack <int> enq;
    stack <int> deq;
    for(int i=0; i<n; i++){
        cin>>insT;
        if(insT==1){
            cin>>val;
            enqueue(val, &enq);
        }else{
            dequeue(&enq, &deq);
        }

    }
}

