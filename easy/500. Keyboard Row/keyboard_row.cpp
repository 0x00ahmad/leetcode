#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

/*

Time Complexity : O(n^2)
Space Complexity : O(n) leaving out the row spaces, we have only store the out vector

Best scores ::
    Runtime - 0ms
    Memory Usage ~ 7.1MB

Explaination
    it's just simple iterating over each letter of each word and checking for the first false word in each row,
        append if any of the checks came out true.

*/

class Solution {
   public:
    std::vector<std::string> findWords(std::vector<std::string>& words) {
        std::unordered_set<char> first_row = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'};
        std::unordered_set<char> second_row = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L'};
        std::unordered_set<char> third_row = {'z', 'x', 'c', 'v', 'b', 'n', 'm', 'Z', 'X', 'C', 'V', 'B', 'N', 'M'};
        std::vector<std::string> out;
        for (auto& word : words) {
            bool fr = true, sr = true, tr = true;
            for (auto character : word) {
                if (fr) {
                    if (first_row.find(character) == first_row.end()) fr = false;
                }
                if (sr) {
                    if (second_row.find(character) == second_row.end()) sr = false;
                }
                if (tr) {
                    if (third_row.find(character) == third_row.end()) tr = false;
                }
            }
            if (fr || sr || tr) out.push_back(word);
        }
        return out;
    }
};

int main() {
    return 0;
}
