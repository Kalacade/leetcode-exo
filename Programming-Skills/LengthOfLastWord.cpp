#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.length() - 1;

        while(i >= 0 && s[i] == ' ')
        {
            i--;
        }

        while(i >= 0 && s[i] != ' ')
        {
            i--;
            length++;
        }
        return length;
    }
};

int main() {
    Solution solution;
    string test1 = "Hello World";
    cout << "Test 1: Input = \"" << test1 << "\", Output = " << solution.lengthOfLastWord(test1) << ", Expected = 5" << endl;
    
    string test2 = "   fly me   to   the moon  ";
    cout << "Test 2: Input = \"" << test2 << "\", Output = " << solution.lengthOfLastWord(test2) << ", Expected = 4" << endl;
    
    string test3 = "luffy is still joyboy";
    cout << "Test 3: Input = \"" << test3 << "\", Output = " << solution.lengthOfLastWord(test3) << ", Expected = 6" << endl;

    return 0;
}