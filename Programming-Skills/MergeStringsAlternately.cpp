#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int size1 = word1.size();
        int size2 = word2.size();
        int i = 0;

        while (i < size1 && i < size2) {
            result.push_back(word1[i]);
            result.push_back(word2[i]);
            ++i;
        }

        while(i < size1) {
            result.push_back(word1[i]);
            i++;
        }

        while (i < size2) {
            result.push_back(word2[i]);
            ++i;
        }

        return result;
    }
};

int main() {

    Solution solution;
    //TEST 1 :
    //string word1 = "abc"
    //string word2 = "pqr"

    //TEST2 : 
    //string word1 = "ab"
    //string word2 = "pqrs"

    //TEST 2:
    string word1 = "abcd";
    string word2 = "pq";
    string result = solution.mergeAlternately(word1, word2);
    cout << "Merged string: " << result << endl;

    return 0;
}