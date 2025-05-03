#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int left = 0;
        int right = 0;
        int up = 0;
        int down = 0;
        
        for(char moveBot : moves)
        {
            if(moveBot == 'L')
            {
                left++;
            }
            else if(moveBot == 'R')
            {
                right++;
            }
            else if(moveBot == 'D')
            {
                down++;
            }
            else
            {
                up++;
            }
        }
        return (left == right && up == down);
    }
};

int main() {
    Solution solution;
    
    string test1 = "UD";
    cout << "Test 1: Input = " << test1 << ", Output = " << boolalpha << solution.judgeCircle(test1) << ", Expected = true" << endl;
    
    string test2 = "LL";
    cout << "Test 2: Input = " << test2 << ", Output = " << solution.judgeCircle(test2) << ", Expected = false" << endl;
    
    string test3 = "RRDD";
    cout << "Test 3: Input = " << test3 << ", Output = " << solution.judgeCircle(test3) << ", Expected = false" << endl;
    
    string test4 = "LDRRLRUULR";
    cout << "Test 4: Input = " << test4 << ", Output = " << solution.judgeCircle(test4) << ", Expected = false" << endl;
    
    return 0;
}