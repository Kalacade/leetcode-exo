#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string triangleType(vector<int>& nums) { // A continuer plutard
        size_t triangle_size = nums.size();
        if(triangle_size == 3) {
            int a = nums[0];
            int b = nums[1];
            int c = nums[2];

            if(a == b && a == c && c == b) {
                return "equilateral";
            } 
            else if(a == b || a == c || b == c) {
                if (a + b > c && a + c > b && b + c > a) {
                    return "isosceles";
                }
                return "none";
            } 
            else {
                if (a + b > c && a + c > b && b + c > a) {
                    return "scalene";
                }
                return "none";
            }
        }

        else {
            return "none";
        }
    }
};

int main() {
    Solution solution;
    
    vector<int> test1 = {3, 4, 5};
    cout << "Test 1: triangle = [3, 4, 5]" << endl;
    string resultat1 = solution.triangleType(test1);
    cout << "Resultat: \"" << resultat1 << "\", Attendu: \"scalene\"" << endl;
    cout << (resultat1 == "scalene" ? "PASS" : "FAIL") << endl << endl;

    vector<int> test2 = {5, 5, 5};
    cout << "Test 2: triangle = [5, 5, 5]" << endl;
    string resultat2 = solution.triangleType(test2);
    cout << "Resultat: \"" << resultat2 << "\", Attendu: \"equilateral\"" << endl;
    cout << (resultat2 == "equilateral" ? "PASS" : "FAIL") << endl << endl;

    vector<int> test3 = {2, 2, 3};
    cout << "Test 3: triangle = [2, 2, 3]" << endl;
    string resultat3 = solution.triangleType(test3);
    cout << "Resultat: \"" << resultat3 << "\", Attendu: \"isosceles\"" << endl;
    cout << (resultat3 == "isosceles" ? "PASS" : "FAIL") << endl;

    vector<int> test4 = {9, 5, 7};
    cout << "Test 4: triangle = [9, 5, 7]" << endl;
    string resultat4 = solution.triangleType(test4);
    cout << "Resultat: \"" << resultat4 << "\", Attendu: \"scalene\"" << endl;
    cout << (resultat4 == "scalene" ? "PASS" : "FAIL") << endl;
    return 0;
}