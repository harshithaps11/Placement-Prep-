#include<iostream>
#include<string>
using namespace std;
class Solution {
    public:
    bool isPalindrome(string s){
        int l = 0;
        int r = s.length()-1;
        while (l < r){
            if ( !isalnum(s[l])){
                l++;
            }
            if ( !isalnum(s[r])){
                r--;
            }
            if (isalnum(s[l]) && isalnum(s[r])){
                if (tolower(s[l]) != tolower(s[r])){
                    return false;
                }
                l++;
                r--;
            }
        }
        return true;
    }
};
int main(){
    Solution s;
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    if (s.isPalindrome(str)){
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}