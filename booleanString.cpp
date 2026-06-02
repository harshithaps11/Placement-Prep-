#include<iostream>
#include<string>
using namespace std;
//if string is empty return false else return true

bool booleanString(string str){
    if ( str.empty()){
        return false;
    }else{
        return true;
    }
}

int main(){
    string str;
    cout << "Enter a string :" <<endl;
    getline(cin, str);
    bool result = booleanString(str);
    cout << result << endl;
    return 0;
}