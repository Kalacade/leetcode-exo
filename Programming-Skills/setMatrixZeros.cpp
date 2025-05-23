#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> zeros;

        for (size_t i = 0; i < matrix.size(); i++) {
            for (size_t j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 0) {
                    zeros.push_back({i, j}); 
                }
            }
        }

        for (auto& pos : zeros) {
            int ligne = pos.first;
            int colonne = pos.second;

            for (size_t j = 0; j < matrix[ligne].size(); j++) {
                matrix[ligne][j] = 0;
            }

            for (size_t i = 0; i < matrix.size(); i++) {
                matrix[i][colonne] = 0;
            }
        }
    }
};

/*
[1,1,1]
[1,0,1]
[1,1,1]

[1,0,1]
[0,0,0]
[1,0,1]

[0,1,2,0]
[3,4,5,2]
[1,3,1,5]

[0,0,0,0]
[0,4,5,0]
[0,3,1,0]
*/

int main() {
    Solution solution;

    vector<vector<int>> test1 = {{1,1,1},{1,0,1},{1,1,1}};
    cout << "Test 1: [[1,1,1],[1,0,1],[1,1,1]]" << endl;
    cout << "Expected: [[1,0,1],[0,0,0],[1,0,1]]" << endl;
    cout << "Input matrix:" << endl;
    for(const auto& row : test1) {
        cout << "[";
        for(size_t i = 0; i < row.size(); i++) {
            cout << row[i];
            if(i != row.size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }
    solution.setZeroes(test1);
    cout << "Output matrix:" << endl;
    for(const auto& row : test1) {
        cout << "[";
        for(size_t i = 0; i < row.size(); i++) {
            cout << row[i];
            if(i != row.size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }
    cout << endl;

    vector<vector<int>> test2 = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    cout << "Test 2: [[0,1,2,0],[3,4,5,2],[1,3,1,5]]" << endl;
    cout << "Expected: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]" << endl;
    cout << "Input matrix:" << endl;
    for(const auto& row : test2) {
        cout << "[";
        for(size_t i = 0; i < row.size(); i++) {
            cout << row[i];
            if(i != row.size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }
    solution.setZeroes(test2);
    cout << "Output matrix:" << endl;
    for(const auto& row : test2) {
        cout << "[";
        for(size_t i = 0; i < row.size(); i++) {
            cout << row[i];
            if(i != row.size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }
    cout << endl;

    vector<vector<int>> test3 = {{1}};
    cout << "Test 3: [[1]]" << endl;
    cout << "Expected: [[1]]" << endl;
    cout << "Input matrix:" << endl;
    for(const auto& row : test3) {
        cout << "[";
        for(size_t i = 0; i < row.size(); i++) {
            cout << row[i];
            if(i != row.size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }
    solution.setZeroes(test3);
    cout << "Output matrix:" << endl;
    for(const auto& row : test3) {
        cout << "[";
        for(size_t i = 0; i < row.size(); i++) {
            cout << row[i];
            if(i != row.size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }
    
    return 0;
}