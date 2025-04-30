#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {

    }
};

int main() {
    Solution solution;
    vector<int> nums = {12, 345, 2, 6, 7896};
    cout << "Résultat: " << solution.findNumbers(nums) << endl; // Result 2
    
    vector<int> nums2 = {555, 901, 482, 1771};
    cout << "Résultat: " << solution.findNumbers(nums2) << endl; // Result 1
}