//create stack but not using vector do actual stack
#include<bits/stdc++.h>
using namespace std;

class Stack{
    int *st;
    int topIndex;
    int capacity;

public:
    Stack(int size){
        st = new int[size];
        capacity = size;
        topIndex = -1;
    }
    ~Stack(){
        delete[] st;
    }
    void push(int x){
        if(topIndex == capacity - 1){
            cout << "Stack overflow" << endl;
            return;
        }
        st[++topIndex] = x;
    }
    void pop(){
        if(topIndex == -1){
            cout << "Stack underflow" << endl;
            return;
        }
        topIndex--;
    }
    int top(){
        if(topIndex == -1){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return st[topIndex];
    }
    void display(){
        for(int i=topIndex; i>=0; i--){
            cout << st[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout << "Top element: " << s.top() << endl;
    s.pop();
    s.display();    
    return 0;
}
