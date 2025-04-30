#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int value = 0;
        int pair = 0;
        for(int n : nums) {
            value = (log10(abs(n))) + 1;
            if(value % 2 == 0) {
                pair++;
            }
        }
        return pair;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {12, 345, 2, 6, 7896};
    cout << "Résultat: " << solution.findNumbers(nums) << endl; // Result 2
    
    vector<int> nums2 = {555, 901, 482, 1771};
    cout << "Résultat: " << solution.findNumbers(nums2) << endl; // Result 1
}