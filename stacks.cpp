//implement stack using vector
#include<bits/stdc++.h>
using namespace std;
class Stack{
    vector <int> st;
public:
    void push(int x){
        st.push_back(x);
    }
    void pop(){
        if(!st.empty()){
            st.pop_back();
        }
    }  
    int top(){
        if(!st.empty()){
            return st.back();
        }
        return -1;
    }
    void display(){
        for(int i=st.size()-1; i>=0; i--){
            cout << st[i] << " ";
        }
        cout << endl;
    }
    


};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout << "Top element: " << s.top() << endl;
    s.pop();
    s.display();    
    return 0;
}