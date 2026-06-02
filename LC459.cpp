#include <string>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool result = lc459(s);
    cout << result << endl;
    return 0;
}


bool lc459(string s ){
    string doubled = s + s;//abab/0/0
    string trimmed = doubled.substr(1,doubled.size()-2);
    //abababab
    if ( trimmed.find(s) != string::npos) return true;
    else return false;
}