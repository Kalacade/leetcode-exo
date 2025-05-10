#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        return false;
    }
};

int main() {
    Solution solution;
    
    vector<vector<int>> test1 = {{1,2}, {2,3}, {3,4}, {4,5}, {5,6}, {6,7}};
    cout << "Test 1: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]" << endl;
    bool resultat1 = solution.checkStraightLine(test1);
    cout << "Resultat: " << (resultat1 ? "true" : "false") << ", Attendu: true" << endl;
    cout << (resultat1 == true ? "PASS" : "FAIL") << endl << endl;

    vector<vector<int>> test2 = {{1,1}, {2,2}, {3,4}, {4,5}, {5,6}, {7,7}};
    cout << "Test 2: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]" << endl;
    bool resultat2 = solution.checkStraightLine(test2);
    cout << "Resultat: " << (resultat2 ? "true" : "false") << ", Attendu: false" << endl;
    cout << (resultat2 == false ? "PASS" : "FAIL") << endl << endl;

    vector<vector<int>> test3 = {{1,1}, {2,2}, {3,3}};
    cout << "Test 3: coordinates = [[1,1],[2,2],[3,3]]" << endl;
    bool resultat3 = solution.checkStraightLine(test3);
    cout << "Resultat: " << (resultat3 ? "true" : "false") << ", Attendu: true" << endl;
    cout << (resultat3 == true ? "PASS" : "FAIL") << endl;

    return 0;
}