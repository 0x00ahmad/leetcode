#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

/*


Time Complexity : O(n) three total iterations
Space Complexity : O(n) two vectors taking auxiliary space

Best scores ::
    Runtime - 8ms
    Memory Usage ~ 10MB



Key points to note
    - the list is not necessarily sorted
    - each element is unique

approach
    - make a vector of the score indices from the original list and sort that indices' vec,
    - iterate from the third index upto n and append the strings from 4th to n (if there are 4+ many scores)
    - finally append the top three medals
*/

class Solution {
   public:
    std::vector<std::string> findRelativeRanks(std::vector<int>& scores) {
        int n = scores.size();
        std::vector<int> ranks;
        for (int i = 0; i < n; i++) ranks.push_back(i);
        std::sort(ranks.begin(), ranks.end(), [&](int a, int b) { return scores[a] > scores[b]; });
        std::vector<std::string> out(n);
        for (int i = 3; i < n; ++i) out[ranks[i]] = std::to_string(i + 1);
        if (n > 0) out[ranks[0]] = "Gold Medal";
        if (n > 1) out[ranks[1]] = "Silver Medal";
        if (n > 2) out[ranks[2]] = "Bronze Medal";
        return out;
    }
};
int main() {
    std::vector<int> test = {5, 4, 2, 1, 3};
    std::vector<std::string> out = Solution().findRelativeRanks(test);
    print_vector(out);
    return 0;
}
