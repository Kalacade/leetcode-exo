#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n, false);
        queue<int> q;

        visited[0] = true;
        q.push(0);

        while (!q.empty()) {
            int room = q.front();
            q.pop();

            for (int key : rooms[room]) {
                if (!visited[key]) {
                    visited[key] = true;
                    q.push(key);
                }
            }
        }

        for (bool v : visited) {
            if (!v) return false;
        }

        return true;
    }
};

int main() {
    
    Solution solution;
    vector<vector<int>> rooms1 = {{1}, {2}, {3}, {}};
    bool expected1 = true;
    bool result1 = solution.canVisitAllRooms(rooms1);
    cout << "Test 1: rooms = {{1}, {2}, {3}, {}}" << endl;
    cout << "Resultat: " << result1 << ", Attendu: " << expected1 << endl;
    cout << (result1 == expected1 ? "PASS" : "FAIL") << endl << endl;

    vector<vector<int>> rooms2 = {{1, 3}, {3}, {0, 1, 2, 3}, {0, 2}};
    bool expected2 = false;
    bool result2 = solution.canVisitAllRooms(rooms2);
    cout << "Test 2: rooms = {{1, 3}, {3}, {0, 1, 2, 3}, {0, 2}}" << endl;
    cout << "Resultat: " << result2 << ", Attendu: " << expected2 << endl;
    cout << (result2 == expected2 ? "PASS" : "FAIL") << endl << endl;
    
    return 0;
}