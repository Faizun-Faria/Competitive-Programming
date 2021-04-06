#include <bits/stdc++.h>
using namespace std;

void enqueue(int val, stack <int>* s){
    s->push(val);
}

int dequeue(stack<int>* s){
    if(s->size()==1) {
        int val = s->top();
        cout<<s->top()<<"\n";
        s->pop();
        return val;
    }
    int x = s->top();
    s->pop();
    dequeue( s );
    s->push(x);
    return x;
}

int main(){
    stack <int> s;
    int noOfIns, ins, val;
    cin>>noOfIns;
    for(int i  = 0; i < noOfIns; i++){
        cin>>ins;
        if(ins == 1){
            cin>>val;
            enqueue(val, &s);
        }else{
            if(s.empty()) cout<<"Queue is empty\n";
            else{
                dequeue( &s );
            }

        }
    }
}
