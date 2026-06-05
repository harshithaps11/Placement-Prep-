//create unordered map where key is int and value is string

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map <int,string> m;
    m.insert({1,"one"});
    m.insert({2,"two"});
    m.insert({3,"three"});
    m.erase(2);
    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}