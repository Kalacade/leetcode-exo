#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        size_t insertPos = 0;

        for(int num : nums) {
            if(num != 0) {
                nums[insertPos++] = num;
            }
        }

        while(insertPos < nums.size()) {
            nums[insertPos++] = 0;
        }

         for (int val : nums) {
            std::cout << val << " ";
        }
    }
};


int main() {
    Solution sol;
    
    // Test Case 1
    vector<int> nums1 = {0,1,0,3,12};
    vector<int> expected1 = {1,3,12,0,0};
    sol.moveZeroes(nums1);
    cout << "Test Case 1: " << (nums1 == expected1 ? "Passed" : "Failed") << endl;
    
    // Test Case 2
    vector<int> nums2 = {0};
    vector<int> expected2 = {0};
    sol.moveZeroes(nums2);
    cout << "Test Case 2: " << (nums2 == expected2 ? "Passed" : "Failed") << endl;
    
    // Test Case 3
    vector<int> nums3 = {1,2,3,4,5};
    vector<int> expected3 = {1,2,3,4,5};
    sol.moveZeroes(nums3);
    cout << "Test Case 3: " << (nums3 == expected3 ? "Passed" : "Failed") << endl;
    
    // Test Case 4
    vector<int> nums4 = {0,0,0,1,2,3};
    vector<int> expected4 = {1,2,3,0,0,0};
    sol.moveZeroes(nums4);
    cout << "Test Case 4: " << (nums4 == expected4 ? "Passed" : "Failed") << endl;
    
    return 0;
}