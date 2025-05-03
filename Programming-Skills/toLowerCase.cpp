#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        string min ="";
        for (char c : s) 
        {
            if (std::isupper(c)) 
            {
                min += std::tolower(c);
            }
            else
            {
                min += c;
            }
        }
        return min;
    }
};

int main() {
    Solution solution;
    
    string test1 = "Hello";
    cout << "Test 1: Input = " << test1 << ", Output = " << solution.toLowerCase(test1) << ", Expected = hello" << endl;
    
    string test2 = "LOVELY";
    cout << "Test 2: Input = " << test2 << ", Output = " << solution.toLowerCase(test2) << ", Expected = lovely" << endl;
    
    string test3 = "al&phaBET";
    cout << "Test 3: Input = " << test3 << ", Output = " << solution.toLowerCase(test3) << ", Expected = al&phabet" << endl;
    
    return 0;
}