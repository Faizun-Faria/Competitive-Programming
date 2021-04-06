#include <bits/stdc++.h>
using namespace std;

class myStack{
public:
    int capacity;
    int top;
    int *arr;
    myStack(int stackSize){
        arr = new int[stackSize];
        capacity = stackSize;
        top = -1;
    }
    void push(int item){
        if(top+1==capacity){
            printf("Error: stack overflow\n");
        }else{
            ++top;
            arr[top] = item;
        }
    }

    void pop(){
        if(isEmpty()){
            printf("Error: stack is empty\n");
        }else{
            top--;
        }
    }

    int peek(){
        if(isEmpty()){
            exit(EXIT_FAILURE);
        }else{
            printf("%d\n",arr[top]);
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }
};

int main(){
    myStack st(10);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    st.push(90);
    st.push(100);
    st.push(20);
    st.peek();
    st.pop();
    st.peek();
}
