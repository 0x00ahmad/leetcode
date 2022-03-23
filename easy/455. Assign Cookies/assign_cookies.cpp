#include <iostream>

#include <string>
#include <vector>
#include <algorithm>

/*

Time Complexity : O(n log n)
Space Complexity : O(1)

Best scores ::
    Runtime ~ 10ms 99%
    Memory Usage ~ 17.4MB 77%

*/

class Solution
{
public:
    int findContentChildren(std::vector<int> &g, std::vector<int> &s)
    {
        if (s.empty() || g.empty())
            return 0;
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());
        int i = 0, j = 0;
        while (i < g.size() && j < s.size())
        {
            if (s[j] >= g[i])
                i++;
            j++;
        }
        return i;
    }
};

int main()
{
    std::vector<int> a = {1, 2, 3, 4};
    std::vector<int> b = {1, 2, 3, 4, 4, 4, 3, 3, 2, 2};

    int out = Solution().findContentChildren(a, b);
    return 0;
}
