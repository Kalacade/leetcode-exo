#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        return 0;
    }
};

int main() {
    Solution solution;
    
    vector<int> test1 = {2,1,2};
    cout << "Test 1: nums = [2,1,2]" << endl;
    int resultat1 = solution.largestPerimeter(test1);
    cout << "Resultat: " << resultat1 << ", Attendu: 5" << endl;
    cout << (resultat1 == 5 ? "PASS" : "FAIL") << endl << endl;

    vector<int> test2 = {1,2,1};
    cout << "Test 2: nums = [1,2,1]" << endl; 
    int resultat2 = solution.largestPerimeter(test2);
    cout << "Resultat: " << resultat2 << ", Attendu: 0" << endl;
    cout << (resultat2 == 0 ? "PASS" : "FAIL") << endl << endl;

    vector<int> test3 = {3,2,3,4};
    cout << "Test 3: nums = [3,2,3,4]" << endl;
    int resultat3 = solution.largestPerimeter(test3);
    cout << "Resultat: " << resultat3 << ", Attendu: 10" << endl;
    cout << (resultat3 == 10 ? "PASS" : "FAIL") << endl;

    return 0;
}