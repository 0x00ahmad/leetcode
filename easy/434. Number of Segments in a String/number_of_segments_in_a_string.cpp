
/*

Time Complexity : O(n)
Space Complexity : O(1)

Best scores ::
    Runtime ~ 0ms 100%
    Memory Usage ~ 6.2MB 12%

*/

#include <iostream>

#include <string>

class Solution
{
public:
    int countSegments(std::string s)
    {
        std::stringstream ss(s);
        int res = 0;
        while (ss >> s)
            ++res;
        return res;
    }
};

int main()
{

    return 0;
}
