#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;
        int retenue = 0;
        string resultat = "";

        while(i >= 0 || j >= 0 || retenue != 0) {
            int bitA = (i >= 0) ? a[i] - '0' : 0;
            int bitB = (j >= 0) ? b[j] - '0' : 0;
            int somme = bitA + bitB + retenue;
            int chiffre = somme % 2;
            retenue = somme / 2;

            resultat = to_string(chiffre) + resultat;
            i--;
            j--;
        }
        return resultat;
    }
};

int main() {
    Solution solution;
    
    string test1_a = "11", test1_b = "1";
    cout << "Test 1: a = \"11\", b = \"1\"" << endl;
    string resultat1 = solution.addBinary(test1_a, test1_b);
    cout << "Resultat: \"" << resultat1 << "\", Attendu: \"100\"" << endl;
    cout << (resultat1 == "100" ? "PASS" : "FAIL") << endl << endl;

    string test2_a = "1010", test2_b = "1011";
    cout << "Test 2: a = \"1010\", b = \"1011\"" << endl;
    string resultat2 = solution.addBinary(test2_a, test2_b);
    cout << "Resultat: \"" << resultat2 << "\", Attendu: \"10101\"" << endl;
    cout << (resultat2 == "10101" ? "PASS" : "FAIL") << endl << endl;

    string test3_a = "111", test3_b = "111";
    cout << "Test 3: a = \"111\", b = \"111\"" << endl;
    string resultat3 = solution.addBinary(test3_a, test3_b);
    cout << "Resultat: \"" << resultat3 << "\", Attendu: \"1110\"" << endl;
    cout << (resultat3 == "1110" ? "PASS" : "FAIL") << endl;
    return 0;
}