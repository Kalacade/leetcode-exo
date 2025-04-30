#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true;
        bool decreasing = true;

        for(size_t i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                decreasing = false;
            }
            if (nums[i] < nums[i - 1]) {
                increasing = false;
            }
        }
        return decreasing || increasing;
    }
};

int main() {
    Solution solution;
    // Test case 1: Monotonic decreasing
    vector<int> nums1 = {4,3,2,1};
    bool test1 = solution.isMonotonic(nums1);
    cout << "Test 1 (Decreasing): " << (test1 ? "PASSED" : "FAILED") << endl;
    
    // Test case 2: Monotonic increasing 
    vector<int> nums2 = {1,2,3,4};
    bool test2 = solution.isMonotonic(nums2);
    cout << "Test 2 (Increasing): " << (test2 ? "PASSED" : "FAILED") << endl;
    
    // Test case 3: Not monotonic
    vector<int> nums3 = {1,3,2,4};
    bool test3 = solution.isMonotonic(nums3);
    cout << "Test 3 (Not monotonic): " << (test3 ? "FAILED" : "PASSED") << endl;
    
    // Test case 4: Equal elements
    vector<int> nums4 = {1,1,1,1};
    bool test4 = solution.isMonotonic(nums4);
    cout << "Test 4 (Equal elements): " << (test4 ? "PASSED " : "FAILED ") << endl;
    
    // Test case 5: Single element
    vector<int> nums5 = {1};
    bool test5 = solution.isMonotonic(nums5);
    cout << "Test 5 (Single element): " << (test5 ? "PASSED " : "FAILED ") << endl;

    return 0;
}