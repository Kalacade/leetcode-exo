#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();

        for (int len = 1; len <= n/2; len++) {
            if (n % len != 0) continue;
            
            string pattern = s.substr(0, len);
            bool isPattern = true;
            
            for (int i = len; i < n; i += len) {
                if (s.substr(i, len) != pattern) {
                    isPattern = false;
                    break;
                }
            }
            
            if (isPattern) return true;
        }
        
        return false;
    }
};

int main() {
    Solution solution;
    
    // Test cases
    string test1 = "abab";
    cout << "Test 1 (abab): " << (solution.repeatedSubstringPattern(test1) ? "true" : "false") << endl;
    
    string test2 = "aba";
    cout << "Test 2 (aba): " << (solution.repeatedSubstringPattern(test2) ? "true" : "false") << endl;
    
    string test3 = "abcabcabcabc";
    cout << "Test 3 (abcabcabcabc): " << (solution.repeatedSubstringPattern(test3) ? "true" : "false") << endl;
    
    return 0;
}