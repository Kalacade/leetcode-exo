#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    }
};

int main() {
    Solution solution;
    
    vector<vector<int>> test1 = {{1,2,3},{4,5,6},{7,8,9}};
    cout << "Test 1: [[1,2,3],[4,5,6],[7,8,9]]" << endl;
    cout << "Expected: [1,2,3,6,9,8,7,4,5]" << endl;
    cout << "Output: [";
    vector<int> result1 = solution.spiralOrder(test1);
    for(size_t i = 0; i < result1.size(); i++) {
        cout << result1[i];
        if(i != result1.size() - 1) cout << ",";
    }
    cout << "]" << endl << endl;

    vector<vector<int>> test2 = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout << "Test 2: [[1,2,3,4],[5,6,7,8],[9,10,11,12]]" << endl;
    cout << "Expected: [1,2,3,4,8,12,11,10,9,5,6,7]" << endl;
    cout << "Output: [";
    vector<int> result2 = solution.spiralOrder(test2);
    for(size_t i = 0; i < result2.size(); i++) {
        cout << result2[i];
        if(i != result2.size() - 1) cout << ",";
    }
    cout << "]" << endl << endl;

    vector<vector<int>> test3 = {{1}};
    cout << "Test 3: [[1]]" << endl;
    cout << "Expected: [1]" << endl;
    cout << "Output: [";
    vector<int> result3 = solution.spiralOrder(test3);
    for(size_t i = 0; i < result3.size(); i++) {
        cout << result3[i];
        if(i != result3.size() - 1) cout << ",";
    }
    cout << "]" << endl;
    
    return 0;
}