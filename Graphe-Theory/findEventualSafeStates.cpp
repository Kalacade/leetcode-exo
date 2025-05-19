#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
    }
};

int main() {
    
    Solution solution;
    vector<vector<int>> graph1 = {{1, 2}, {2, 3}, {5}, {0}, {3}, {}, {4}};
    vector<int> expected1 = {2, 4, 5, 6};
    vector<int> result1 = solution.eventualSafeNodes(graph1);
    cout << "Test 1: graph = {{1, 2}, {2, 3}, {5}, {0}, {3}, {}, {4}}" << endl;
    cout << "Resultat: ";
    for (int node : result1) {
        cout << node << " ";
    }
    cout << ", Attendu: ";
    for (int node : expected1) {
        cout << node << " ";
    }
    cout << endl;
    cout << (result1 == expected1 ? "PASS" : "FAIL") << endl << endl;

    vector<vector<int>> graph2 = {{1, 2, 3, 4}, {1, 2}, {3, 4}, {0, 4}, {5}};
    vector<int> expected2 = {4, 5};
    vector<int> result2 = solution.eventualSafeNodes(graph2);
    cout << "Test 2: graph = {{1, 2, 3, 4}, {1, 2}, {3, 4}, {0, 4}, {5}}" << endl;
    cout << "Resultat: ";
    for (int node : result2) {
        cout << node << " ";
    }
    cout << ", Attendu: ";
    for (int node : expected2) {
        cout << node << " ";
    }
    cout << endl;
    cout << (result2 == expected2 ? "PASS" : "FAIL") << endl << endl;

    return 0;
}