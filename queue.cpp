//create class queue using vector and perform different queue operatons
#include<iostream>
#include<vector>

using namespace std;

class queue{
    public:
    vector<int> q;
    int size;
    void push(int val){
        q.push_back(val);
        size++;
    }
    void pop(){
        if ( size == 0){
            cout << "Queue is empty" << endl;
        } else{
            q.erase(q.begin());
            size--;
        }
    }
    int front(){
        if ( size == 0){
            cout << "Queue is empty" << endl;
            return -1;
        } else{
            return q[0];
        }
    }
    void display(){
        cout << "Queue elements:" << endl;
        for (int i = 0; i < q.size(); i++){
            cout << q[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    cout << "Front element: " << q.front() << endl;
    q.pop();
    cout << "Front element after pop: " << q.front() << endl;
    return 0;



}
