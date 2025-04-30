#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        vector<int> array;
        int sign = 1;

        for(int num : nums) {
            if(num > 0) {
                array.push_back(1);
            }
            else if(num < 0) {
                array.push_back(-1);
            }
            else {
                array.push_back(0);
            }
        }

        for(int n : array) {
            sign = n * sign;
        }

        return sign;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    vector<int> nums1 = {-1,-2,-3,-4,3,2,1};
    int expected1 = 1;
    int result1 = sol.arraySign(nums1);
    cout << "Test Case 1: " << (result1 == expected1 ? "Passed" : "Failed") << endl;

    // Test Case 2 
    vector<int> nums2 = {1,5,0,2,-3};
    int expected2 = 0;
    int result2 = sol.arraySign(nums2);
    cout << "Test Case 2: " << (result2 == expected2 ? "Passed" : "Failed") << endl;

    // Test Case 3
    vector<int> nums3 = {-1,1,-1,1,-1};
    int expected3 = -1;
    int result3 = sol.arraySign(nums3);
    cout << "Test Case 3: " << (result3 == expected3 ? "Passed" : "Failed") << endl;

    return 0;
}
