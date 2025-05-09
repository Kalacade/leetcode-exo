#include <iostream>

using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        int i;
        int impair = 0;

        for(i=low; i<=high; i++)
        {
            if(i % 2 != 0)
            {
                impair++;
            }
        }
        return impair;
    }
};

int main() {
    Solution solution;
    
    cout << "Test 1: low = 3, high = 7" << endl;
    int resultat1 = solution.countOdds(3, 7);
    cout << "Resultat: " << resultat1 << ", Attendu: 3" << endl;
    cout << (resultat1 == 3 ? "PASS" : "FAIL") << endl << endl;

    cout << "Test 2: low = 8, high = 10" << endl;  
    int resultat2 = solution.countOdds(8, 10);
    cout << "Resultat: " << resultat2 << ", Attendu: 1" << endl;
    cout << (resultat2 == 1 ? "PASS" : "FAIL") << endl << endl;

    cout << "Test 3: low = 1, high = 1" << endl;
    int resultat3 = solution.countOdds(1, 1); 
    cout << "Resultat: " << resultat3 << ", Attendu: 1" << endl;
    cout << (resultat3 == 1 ? "PASS" : "FAIL") << endl;
    return 0;
}