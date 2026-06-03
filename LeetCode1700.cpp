#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count0 = 0, count1 = 0;

        for (int s : students) {
            if (s == 0) count0++;
            else count1++;
        }

        for (int sandwich : sandwiches) {
            if (sandwich == 0) {
                if (count0 == 0) return count1;
                count0--;
            } else {
                if (count1 == 0) return count0;
                count1--;
            }
        }

        return 0;
    }
};

int main(){
    vector<int> Students = {1, 1, 0, 0};
    vector<int> Sandwiches = {0, 1, 0, 1};
    Solution s;
    int result = s.countStudents(Students, Sandwiches);
    cout << "Number of students unable to eat: " << result << endl;
    return 0;
}
