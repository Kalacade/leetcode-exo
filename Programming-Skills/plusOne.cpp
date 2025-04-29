#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++; 
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1: Simple increment
    vector<int> test1 = {1, 2, 3};
    vector<int> result1 = solution.plusOne(test1);
    cout << "Test 1 (123 + 1): ";
    for (int digit : result1) cout << digit;
    cout << endl;

    // Test Case 2: Carrying over
    vector<int> test2 = {9, 9, 9};
    vector<int> result2 = solution.plusOne(test2);
    cout << "Test 2 (999 + 1): ";
    for (int digit : result2) cout << digit;
    cout << endl;

    // Test Case 3: Single digit
    vector<int> test3 = {9};
    vector<int> result3 = solution.plusOne(test3);
    cout << "Test 3 (9 + 1): ";
    for (int digit : result3) cout << digit;
    cout << endl;

    // Test Case 4: No carrying needed
    vector<int> test4 = {4, 3, 2, 1};
    vector<int> result4 = solution.plusOne(test4);
    cout << "Test 4 (4321 + 1): ";
    for (int digit : result4) cout << digit;
    cout << endl;

    return 0;
}