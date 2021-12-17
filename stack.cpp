#include<iostream>
using namespace std;

struct Stack{
    int top;
    int capacity;
    int array[capacity];

    bool isEmpty(){
        return top == -1;
    }

    bool isFull(){
        return top == capacity -1;
    }

    void push(int x){
        if(!isFull()){
            top++;
            array[top] = x;
        }
        else{
            cout<<"Stack Overflow\n";
        }
    }

    int pop(){
        if(!isEmpty()){
            top--;
            return array[top+1];
            
        }else{
            cout<<"Stack Empty\n";
        }
    }
};

struct Stack createStack(int capacity){
    Stack newstack;
    newstack.top = -1;
    newstack.capacity = capacity;
    int arr[capacity];
    newstack.array = arr;
    return newstack;
}

int main(){
    Stack stack1 = createStack(2);
    cout<<stack1.isEmpty()<<endl;
    cout<<stack1.top<<endl;
    cout<<stack1.pop();
}

