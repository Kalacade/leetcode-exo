#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        for(size_t i = 0; i < accounts.size(); i++) {
            int wealth = 0;
            for(size_t j = 0; j < accounts[i].size(); j++) {
                wealth = accounts[i][j] + wealth;
            }
            if(wealth > max) {
                max = wealth;
            }
        }
        return max;
    }
};

int main() {
    Solution solution;
    
    vector<vector<int>> test1 = {{1,2,3},{3,2,1}};
    cout << "Test 1: [[1,2,3],[3,2,1]]" << endl;
    cout << "Expected: 6" << endl;
    cout << "Output: " << solution.maximumWealth(test1) << endl;
    cout << "Status: " << (solution.maximumWealth(test1) == 6 ? "Passed" : "Failed") << endl << endl;

    vector<vector<int>> test2 = {{1,5},{7,3},{3,5}};
    cout << "Test 2: [[1,5],[7,3],[3,5]]" << endl;
    cout << "Expected: 10" << endl;
    cout << "Output: " << solution.maximumWealth(test2) << endl;
    cout << "Status: " << (solution.maximumWealth(test2) == 10 ? "Passed" : "Failed") << endl << endl;

    vector<vector<int>> test3 = {{2,8,7},{7,1,3},{1,9,5}};
    cout << "Test 3: [[2,8,7],[7,1,3],[1,9,5]]" << endl;
    cout << "Expected: 17" << endl;
    cout << "Output: " << solution.maximumWealth(test3) << endl;
    cout << "Status: " << (solution.maximumWealth(test3) == 17 ? "Passed" : "Failed") << endl << endl;

    return 0;
}