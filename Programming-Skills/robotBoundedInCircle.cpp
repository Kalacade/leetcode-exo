#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dx[4] = {0, 1, 0, -1}; 
        int dy[4] = {1, 0, -1, 0}; 
        int x = 0, y = 0;
        int direction = 0;

        for (char c : instructions) {
            if (c == 'G') {
                x += dx[direction];
                y += dy[direction];
            } else if (c == 'L') {
                direction = (direction + 3) % 4; 
            } else if (c == 'R') {
                direction = (direction + 1) % 4; 
            }
        }
        return (x == 0 && y == 0) || direction != 0;
    }
};

int main() {
    Solution solution;    
    cout << "Test 1: 'GGLLGG'" << endl;
    cout << "Expected: true" << endl;
    cout << "Output: " << (solution.isRobotBounded("GGLLGG") ? "true" : "false") << endl << endl;
    
    cout << "Test 2: 'GG'" << endl; 
    cout << "Expected: false" << endl;
    cout << "Output: " << (solution.isRobotBounded("GG") ? "true" : "false") << endl << endl;
    
    cout << "Test 3: 'GL'" << endl;
    cout << "Expected: true" << endl;
    cout << "Output: " << (solution.isRobotBounded("GL") ? "true" : "false") << endl << endl;
    return 0;
}