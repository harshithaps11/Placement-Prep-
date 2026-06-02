#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string substring(int start, int end, string original_str){
    string substr = original_str.substr(start, end - start);
    return substr;
}

int main(){
    string str ;
    cout << "Enter a string: ";
    getline(cin, str);
    int start, end;
    cout << "Enter start and end indices: ";
    cin >> start >> end;
    string sub = substring(start, end, str);
    cout << "Substring: " << sub << endl;
    return 0;
}