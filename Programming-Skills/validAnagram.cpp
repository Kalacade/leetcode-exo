#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Longueur de chaque mot
// Nombre lettre identique

class Solution {
public:
    bool isAnagram(string s, string t) {
        bool res = false;
        int sizeS = s.size();
        int sizeT = t.size();
        
        if(sizeS != sizeT) {
            res = false;
        }

        else {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            res = (s == t);
        }

        return res;
    }
};

int main() {
    Solution solution;

    // TEST 1 :
    string s = "anagram";
    string t = "nagaram";
    bool result = solution.isAnagram(s, t);
    cout << "Est un anagramme: " << (result ? "true" : "false") << endl;

    // TEST 2 :
    s = "rat";
    t = "car";
    result = solution.isAnagram(s, t);
    cout << "Est un anagramme: " << (result ? "true" : "false") << endl;

    // TEST 3 :
    s = "hello";
    t = "olleh"; 
    result = solution.isAnagram(s, t);
    cout << "Est un anagramme: " << (result ? "true" : "false") << endl;
    return 0;
}