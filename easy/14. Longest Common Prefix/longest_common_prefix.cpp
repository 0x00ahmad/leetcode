#include <iostream>
#include <string>
#include <vector>

class Solution {
   public:
    std::string longestCommonPrefix(std::vector<std::string> &strs) {
        if (strs.size() < 1) return "";
        std::string longest_prefix = strs[0];
        // starting from the second word as we store the first one as a prefix starter
        for (int i = 1; i < strs.size(); i++) {
            cout << strs[i] << endl;
            while (strs[i].find(longest_prefix) != 0) {
                longest_prefix = longest_prefix.substr(0, longest_prefix.length() - 1);
            }
        }
        return longest_prefix;
    }
};

int main() {
    return 0;
}
