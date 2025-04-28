#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int lengthHaystack = haystack.length();
        int lengthNeedle = needle.length();

        if (lengthNeedle == 0) 
        {
            return 0;
        }
        for(int i=0; i <= lengthHaystack-1; i++)
        {
            int j=0;
            while (j < lengthNeedle && haystack[i + j] == needle[j]) 
            {
                j++;
            }

            if (j == lengthNeedle) 
            {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;

    // TEST 1 :
    string haystack = "sadbutsad";
    string needle = "sad";
    int result = solution.strStr(haystack, needle);
    cout << "Index de la première occurrence: " << result << endl;

    // TEST 2 :
    haystack = "leetcode";
    needle = "leeto"; 
    result = solution.strStr(haystack, needle);
    cout << "Index de la première occurrence: " << result << endl;

    // TEST 3 :
    haystack = "hello";
    needle = "ll";
    result = solution.strStr(haystack, needle);
    cout << "Index de la première occurrence: " << result << endl;
    return 0;
}