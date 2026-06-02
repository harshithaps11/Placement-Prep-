#include <iostream>
#include <string>
using namespace std;

int firstOccurrence(string s, string target) {
    int n = s.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        int j = 0;

        while (j < m && s[i + j] == target[j]) {
            j++;
        }

        if (j == m)
            return i;
    }

    return -1;
}

int main() {
    string s, target;
    cin >> s >> target;

    cout << firstOccurrence(s, target);
    return 0;
}