#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        
        sort(salary.begin(), salary.end());

        int n = salary.size();

        double sum = 0;
        for(int i=1; i < n-1; i++)
        {
            sum += salary[i];
        }
        return sum / (n - 2);
    }
};

int main() {
    Solution solution;
    
    vector<int> test1 = {4000,3000,1000,2000};
    cout << "Test 1: salary = [4000,3000,1000,2000]" << endl;
    double resultat1 = solution.average(test1);
    cout << "Resultat: " << resultat1 << ", Attendu: 2500" << endl;
    cout << (resultat1 == 2500 ? "PASS" : "FAIL") << endl << endl;

    vector<int> test2 = {1000,2000,3000};
    cout << "Test 2: salary = [1000,2000,3000]" << endl;
    double resultat2 = solution.average(test2);
    cout << "Resultat: " << resultat2 << ", Attendu: 2000" << endl;
    cout << (resultat2 == 2000 ? "PASS" : "FAIL") << endl << endl;

    vector<int> test3 = {6000,5000,4000,3000,2000,1000};
    cout << "Test 3: salary = [6000,5000,4000,3000,2000,1000]" << endl;
    double resultat3 = solution.average(test3);
    cout << "Resultat: " << resultat3 << ", Attendu: 3500" << endl;
    cout << (resultat3 == 3500 ? "PASS" : "FAIL") << endl;
    
    return 0;
}