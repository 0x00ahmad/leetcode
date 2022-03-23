#include <iostream>

#include <string>
#include <vector>
#include <algorithm>

/*

Time Complexity : O(n)
Space Complexity : O(1) (excluding the size of the return vector)

Best scores ::
    Runtime ~ 40ms 95%
    Memory Usage ~ 33.7MB 52%

*/

class Solution
{
public:
    std::vector<int> findDisappearedNumbers(std::vector<int> &nums)
    {
        /*

        the idea is simple, we just have to iterate over the range, and the number we find at that index,
        we take it and at it's 'index' we make the number negative, finally at the second iteration
        we collect all of the positive ones left at that index, the index which is missing

        */
        int n = nums.size();
        std::vector<int> out{};
        for (int i = 0; i < n; ++i)
        {
            int idx = abs(nums[i]) - 1; // for 0 based indexing
            nums[idx] = nums[idx] > 0 ? -nums[idx] : nums[idx];
        }
        for (int i = 0; i < n; i++)
            if (nums[i] > 0)
                out.push_back(i + 1);
        return out;
    }
};

int main()
{

    return 0;
}
