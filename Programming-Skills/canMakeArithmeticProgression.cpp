#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size() <= 2) return true;

        for (size_t i = 0; i < arr.size(); i++) {
            for (size_t j = 0; j < arr.size() - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        int diff = arr[1] - arr[0];
        for(size_t i = 2; i < arr.size(); i++) {
            if(arr[i] - arr[i - 1] != diff) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1: Arithmetic progression
    vector<int> test1 = {3, 5, 1};
    cout << "Test 1: " << (solution.canMakeArithmeticProgression(test1) ? "Passed" : "Failed") << endl;
    
    // Test Case 2: Not an arithmetic progression
    vector<int> test2 = {1, 2, 4};
    cout << "Test 2: " << (solution.canMakeArithmeticProgression(test2) ? "Passed" : "Failed") << endl;
    
    // Test Case 3: Single element
    vector<int> test3 = {1};
    cout << "Test 3: " << (solution.canMakeArithmeticProgression(test3) ? "Passed" : "Failed") << endl;
    
    // Test Case 4: Two elements
    vector<int> test4 = {1, 3};
    cout << "Test 4: " << (solution.canMakeArithmeticProgression(test4) ? "Passed" : "Failed") << endl;
    
    // Test Case 5: Negative numbers
    vector<int> test5 = {-5, -3, -1, 1, 3};
    cout << "Test 5: " << (solution.canMakeArithmeticProgression(test5) ? "Passed" : "Failed") << endl;

    return 0;
}
