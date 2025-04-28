#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int sumS = 0;
        int sumT = 0;

        for(char c : s)
        {
            sumS += c;
        }
        for(char c : t)
        {
            sumT += c;
        }
        return(char)(sumT - sumS);
    }
};

int main() {
    Solution solution;

    // TEST 1 :
    //string s = "abcd";
    //string t = "abcde";

    string s = "";
    string t = "y";
    char result = solution.findTheDifference(s, t);
    cout << "The difference is: " << result << endl;

    return 0;
}