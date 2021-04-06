#include <bits/stdc++.h>
using namespace std;

template <class Type>
class myStack{
public:
    Type *arr;
    int capacity;
    int top;

    myStack(int Size){
        arr = new Type[Size];
        capacity = Size;
        top = -1;
    }
    void push(Type item){
        if(isFull()){
            printf("Error: stack overflow.");
            return;
        }
        arr[++top] = item;
    }
    void pop(){
        if(isEmpty()){
            printf("Error: stack underflow.");
            return;
        }
        top--;
    }
    Type peek(){
        if(isEmpty()){
            printf("Error: stack underflow.");
            exit(EXIT_FAILURE);
        }
        return arr[top];
    }
    int Size(){
        return top+1;
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==capacity-1;
    }
    void print_stack(myStack st){
        while(!st.isEmpty()){
            cout<<st.peek()<<endl;
            st.pop();
        }
        printf("\n");
    }
};
int main(){
    myStack<int> st(10);
    st.push(1);
    st.push(2);
    st.push(3);
    st.print_stack(st);
    st.pop();
    st.pop();
    st.print_stack(st);

    myStack<string> st1(10);
    st1.push("abc");
    st1.push("4");
    st1.push("5");
    st1.print_stack(st1);
    st1.pop();
    st1.pop();
    st1.print_stack(st1);
}
