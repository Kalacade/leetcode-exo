#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> record;
        
        for (const string& op : operations) {
            if (op == "C") {
                if (!record.empty()) record.pop();
            } 
            else if (op == "D") {
                if (!record.empty()) record.push(2 * record.top());
            } 
            else if (op == "+") {
                if (record.size() >= 2) {
                    int top1 = record.top(); record.pop();
                    int top2 = record.top();
                    record.push(top1);  // Remettre le dernier élément
                    record.push(top1 + top2);
                }
            } 
            else {  // Si c'est un nombre
                try {
                    record.push(stoi(op));  // Convertir la chaîne en entier
                } catch (const std::invalid_argument& e) {
                    cerr << "Erreur de conversion : " << op << " n'est pas un nombre valide.\n";
                    return -1;  // Gérer l'erreur proprement
                }
            }
        }
        
        // Calculer la somme totale
        int totalSum = 0;
        while (!record.empty()) {
            totalSum += record.top();
            record.pop();
        }
        
        return totalSum;
    }
};

int main() {
    Solution solution;
    
    vector<string> test1 = {"5","2","C","D","+"};
    cout << "Test 1: Input = [5,2,C,D,+], Output = " << solution.calPoints(test1) << ", Expected = 30" << endl;
    
    vector<string> test2 = {"5","-2","4","C","D","9","+","+"};
    cout << "Test 2: Input = [5,-2,4,C,D,9,+,+], Output = " << solution.calPoints(test2) << ", Expected = 27" << endl;
    
    vector<string> test3 = {"1","C"};
    cout << "Test 3: Input = [1,C], Output = " << solution.calPoints(test3) << ", Expected = 0" << endl;
    
    return 0;
}
