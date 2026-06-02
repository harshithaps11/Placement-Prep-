#include <iostream>
using namespace std;
class Complex{
    public:
    int real ;
    float img;
    Complex(int r, float i) : real(r), img(i) {

    }
    Complex& operator+(Complex &rhs){
        cout << this->real<<endl;
        cout << this->img<<endl;
        return *this;

    }
};
int main(){
    Complex num1(5,10.5)
}