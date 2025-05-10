#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() <= 2) return true;
        
        int x1 = coordinates[0][0], y1 = coordinates[0][1];
        int x2 = coordinates[1][0], y2 = coordinates[1][1];
        
        for (int i = 2; i < coordinates.size(); i++) {
            int x = coordinates[i][0], y = coordinates[i][1];
            if ((y2 - y1) * (x - x1) != (y - y1) * (x2 - x1)) {
                return false;
            }
        }
        return true;
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