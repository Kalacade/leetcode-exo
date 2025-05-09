#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for(int bill : bills)
        {
            if(bill == 5)
            {
                five++;
            }
            else if(bill == 10)
            {
                if(five > 0)
                {
                    five--;
                    ten++;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if(ten > 0 && five > 0)
                {
                    ten--;
                    five--;
                }
                else if(five >= 3)
                {
                    five -= 3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    
    vector<int> test1 = {5,5,5,10,20};
    cout << "Test 1: bills = [5,5,5,10,20]" << endl;
    bool resultat1 = solution.lemonadeChange(test1);
    cout << "Resultat: " << (resultat1 ? "true" : "false") << ", Attendu: true" << endl;
    cout << (resultat1 == true ? "PASS" : "FAIL") << endl << endl;

    vector<int> test2 = {5,5,10,10,20};
    cout << "Test 2: bills = [5,5,10,10,20]" << endl;
    bool resultat2 = solution.lemonadeChange(test2);
    cout << "Resultat: " << (resultat2 ? "true" : "false") << ", Attendu: false" << endl;
    cout << (resultat2 == false ? "PASS" : "FAIL") << endl << endl;

    vector<int> test3 = {5,5,10};
    cout << "Test 3: bills = [5,5,10]" << endl;
    bool resultat3 = solution.lemonadeChange(test3);
    cout << "Resultat: " << (resultat3 ? "true" : "false") << ", Attendu: true" << endl;
    cout << (resultat3 == true ? "PASS" : "FAIL") << endl;
    
    return 0;
}