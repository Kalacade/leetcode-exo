#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<int>> player_a;
        vector<vector<int>> player_b;
        
        // Prendre les coups des joueurs
        for(size_t i = 0; i < moves.size(); i += 2) {
            player_a.push_back({moves[i][0], moves[i][1]});
        }

        for(size_t i = 1; i < moves.size(); i += 2) {
            player_b.push_back({moves[i][0], moves[i][1]});
        }

        // Vérifier le condition de victoire
        auto check_win = [](const vector<vector<int>>& player) {
            vector<vector<vector<int>>> win_patterns = {
                {{0,0},{0,1},{0,2}}, // Row 0
                {{1,0},{1,1},{1,2}}, // Row 1
                {{2,0},{2,1},{2,2}}, // Row 2
                {{0,0},{1,0},{2,0}}, // Col 0
                {{0,1},{1,1},{2,1}}, // Col 1
                {{0,2},{1,2},{2,2}}, // Col 2
                {{0,0},{1,1},{2,2}}, // Diagonal 1 
                {{0,2},{1,1},{2,0}}  // Diagonal 2
            };

            for (const auto& pattern : win_patterns) {
                int count = 0;
                for (const auto& pos : pattern) {
                    for (const auto& move : player) {
                        if (move[0] == pos[0] && move[1] == pos[1]) {
                            count++;
                            break;
                        }
                    }
                }
                if (count == 3) return true;
            }
            return false;
        };

        if (check_win(player_a)) return "A";
        if (check_win(player_b)) return "B";
        return moves.size() == 9 ? "Draw" : "Pending";
    }
};

int main() {
    Solution solution;
    
    vector<vector<int>> moves1 = {{0,0},{2,0},{1,1},{2,1},{2,2}};
    cout << "Test 1: " << solution.tictactoe(moves1) << endl; // Devrait afficher "A"
    
    vector<vector<int>> moves2 = {{0,0},{1,1},{0,1},{0,2},{1,0},{2,0}};
    cout << "Test 2: " << solution.tictactoe(moves2) << endl; // Devrait afficher "B"
    
    vector<vector<int>> moves3 = {{0,0},{1,1},{2,0},{1,0},{1,2},{2,1},{0,1},{0,2},{2,2}};
    cout << "Test 3: " << solution.tictactoe(moves3) << endl; // Devrait afficher "Draw"
    
    return 0;
}