#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int provinces = 0;
        int n = isConnected.size();
        vector<bool> visited(n, false);

        for (size_t i = 0; i < n; i++) {
            if (!visited[i]) {
                provinces++;
                stack<int> s;
                s.push(i);
                while (!s.empty()) {
                    int current = s.top();
                    s.pop();
                    visited[current] = true;

                    for (size_t j = 0; j < n; j++) {
                        if (isConnected[current][j] == 1 && !visited[j]) {
                            s.push(j);
                            visited[j] = true;
                        }
                    }
                }
            }
        }

        return provinces;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> isConnected1 = {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}};
    int expected1 = 2;
    int result1 = solution.findCircleNum(isConnected1);
    cout << "Test 1: isConnected = {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}}" << endl;
    cout << "Resultat: " << result1 << ", Attendu: " << expected1 << endl;
    cout << (result1 == expected1 ? "PASS" : "FAIL") << endl << endl;

    vector<vector<int>> isConnected2 = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int expected2 = 3;
    int result2 = solution.findCircleNum(isConnected2);
    cout << "Test 2: isConnected = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}" << endl;
    cout << "Resultat: " << result2 << ", Attendu: " << expected2 << endl;
    cout << (result2 == expected2 ? "PASS" : "FAIL") << endl << endl;

    vector<vector<int>> isConnected3 = {{1, 0, 0, 1}, {0, 1, 1, 0}, {0, 1, 1, 1}, {1, 0, 1, 1}};
    int expected3 = 1;
    int result3 = solution.findCircleNum(isConnected3);
    cout << "Test 3: isConnected = {{1, 0, 0, 1}, {0, 1, 1, 0}, {0, 1, 1, 1}, {1, 0, 1, 1}}" << endl;
    cout << "Resultat: " << result3 << ", Attendu: " << expected3 << endl;
    cout << (result3 == expected3 ? "PASS" : "FAIL") << endl;
    return 0;
}