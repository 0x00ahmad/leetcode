#include <iostream>
#include <string>
#include <vector>

class Solution {
   public:
    string longestCommonPrefix(std::vector<string> &strs) {
        if (strs.size() < 1) return "";
        string longest_prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            // starting from the second word as we store the first one as a prefix starter
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
