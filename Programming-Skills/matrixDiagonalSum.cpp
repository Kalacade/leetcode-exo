#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
    }
};

int main() {
    Solution solution;
    
    vector<vector<int>> test1 = {{1,2,3},{4,5,6},{7,8,9}};
    cout << "Test 1: [[1,2,3],[4,5,6],[7,8,9]]" << endl;
    cout << "Expected: 25" << endl; 
    cout << "Output: " << solution.diagonalSum(test1) << endl;
    cout << "Status: " << (solution.diagonalSum(test1) == 25 ? "Passed" : "Failed") << endl << endl;

    vector<vector<int>> test2 = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    cout << "Test 2: [[1,1,1,1],[1,1,1,1],[1,1,1,1],[1,1,1,1]]" << endl;
    cout << "Expected: 8" << endl;
    cout << "Output: " << solution.diagonalSum(test2) << endl;
    cout << "Status: " << (solution.diagonalSum(test2) == 8 ? "Passed" : "Failed") << endl << endl;

    vector<vector<int>> test3 = {{5}};
    cout << "Test 3: [[5]]" << endl;
    cout << "Expected: 5" << endl;
    cout << "Output: " << solution.diagonalSum(test3) << endl;
    cout << "Status: " << (solution.diagonalSum(test3) == 5 ? "Passed" : "Failed") << endl << endl;

    return 0;
}