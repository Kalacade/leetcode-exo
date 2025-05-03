#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
    int result = 0;
    int prevValue = 0;
    
    for (int i = s.length() - 1; i >= 0; i--) {
        int currentValue = 0;
        
        switch(s[i]) {
            case 'I': currentValue = 1; break;
            case 'V': currentValue = 5; break;
            case 'X': currentValue = 10; break;
            case 'L': currentValue = 50; break;
            case 'C': currentValue = 100; break;
            case 'D': currentValue = 500; break;
            case 'M': currentValue = 1000; break;
        }
        
        if (currentValue < prevValue) {
            result -= currentValue;
        } else {
            result += currentValue;
        }
        
        prevValue = currentValue;
    }
    
    return result;
    }
};

/*
V             5
X             10
L             50
C             100
D             500
M             1000
*/

int main() {

    Solution solution;
    string test1 = "III";
    cout << "Test 1: Input = " << test1 << ", Output = " << solution.romanToInt(test1) << ", Expected = 3" << endl;
    
    string test2 = "LVIII"; 
    cout << "Test 2: Input = " << test2 << ", Output = " << solution.romanToInt(test2) << ", Expected = 58" << endl;
    
    string test3 = "MCMXCIV";
    cout << "Test 3: Input = " << test3 << ", Output = " << solution.romanToInt(test3) << ", Expected = 1994" << endl;
    
    return 0;
}