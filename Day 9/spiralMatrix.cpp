#include<stdlib.h>
#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

class Solution{
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int num = 1;
        int left = 0, right = n - 1, top = 0, bottom = n - 1;
        
        while (num <= n * n) {
            for (int i = left; i <= right; ++i) {
                matrix[top][i] = num++;
            }
            top++;
            
            for (int i = top; i <= bottom; ++i) {
                matrix[i][right] = num++;
            }
            right--;
            
            for (int i = right; i >= left; --i) {
                matrix[bottom][i] = num++;
            }
            bottom--;
            
            for (int i = bottom; i >= top; --i) {
                matrix[i][left] = num++;
            }
            left++;
        }
        
        return matrix;
    }
};

int main(){
    Solution sol;
    int n = 3;
    vector<vector<int>> matrix = sol.generateMatrix(n);
    
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}