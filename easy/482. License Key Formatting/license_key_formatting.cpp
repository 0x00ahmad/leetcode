

#include <algorithm>
#include <iostream>
#include <string>

// ignore '-' in original string
// every (K+1)th char is '-' from tail

/*

Time Complexity : O(n)
Space Complexity : O(n)

Best scores ::
    Runtime - 8ms 80%
    Memory Usage ~ 8.3MB

Explaination
    simply loop over the string in reverse, appending each characeter in upper case
    calculate the pos of each '-' to be added with the given k with the currently result string
*/

class Solution {
   public:
    std::string licenseKeyFormatting(std::string s, int k) {
        std::string res = "";
        for (auto character = s.rbegin(); character < s.rend(); character++) {
            if (*character != '-') {
                if (res.size() % (k + 1) == k) res += '-';
                res += toupper(*character);
            }
        }
        std::reverse(res.begin(), res.end());
        return res;
    }
};

int main() {
    std::string out = Solution().licenseKeyFormatting("3-SD-98a", 3);
    std::cout << "\n\n\n\n";
    std::cout << out << "\n";
    return 0;
}
