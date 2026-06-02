//create a class rectangle have len and breadth 
//create objs r1 and r2 and add both
//define your own constructor 
#include<iostream>
using namespace std;

class Rectangle{
    public:
    int len;
    int breadth;
    Rectangle(int l, int b) : len(l), breadth(b) {

    }
    Rectangle operator+(Rectangle &rhs){
        Rectangle temp(0,0);
        temp.len = this->len + rhs.len;
        temp.breadth = this->breadth + rhs.breadth;
        return temp;
    }
};
int main(){
    Rectangle r1(5,10);
    Rectangle r2(15,20);
    Rectangle r3 = r1 + r2;
    cout << "length of r3: "<<r3.len<<endl;
    cout << "breadth of r3: "<<r3.breadth<<endl;
    return 0;
}