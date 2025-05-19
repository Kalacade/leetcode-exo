#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";

        int n = num1.size();
        int m = num2.size();
        vector<int> result(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[i + j + 1];

                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

        string product = "";
        for (int digit : result) {
            if (!(product.empty() && digit == 0)) {
                product += to_string(digit);
            }
        }
    
        return product.empty() ? "0" : product;
    }
};

int main() {
    Solution solution;
    
    string test1_a = "2", test1_b = "3";
    cout << "Test 1: a = \"2\", b = \"3\"" << endl;
    string resultat1 = solution.multiply(test1_a, test1_b);
    cout << "Resultat: \"" << resultat1 << "\", Attendu: \"6\"" << endl;
    cout << (resultat1 == "6" ? "PASS" : "FAIL") << endl << endl;

    string test2_a = "4", test2_b = "5";
    cout << "Test 2: a = \"4\", b = \"5\"" << endl;
    string resultat2 = solution.multiply(test2_a, test2_b);
    cout << "Resultat: \"" << resultat2 << "\", Attendu: \"20\"" << endl;
    cout << (resultat2 == "20" ? "PASS" : "FAIL") << endl << endl;

    string test3_a = "0", test3_b = "1";
    cout << "Test 3: a = \"0\", b = \"1\"" << endl;
    string resultat3 = solution.multiply(test3_a, test3_b);
    cout << "Resultat: \"" << resultat3 << "\", Attendu: \"0\"" << endl;
    cout << (resultat3 == "0" ? "PASS" : "FAIL") << endl;
    return 0;
}