#include <iostream>

#include <string>
#include <vector>

/*

Time Complexity : O(n * m)
Space Complexity : O(1)

Best scores ::
    Runtime ~ 16ms 92%
    Memory Usage ~ 13.5MB 51%

Explaination
    ? you copied this, so don't push this to the repo
    The key here is to double the string, that is, append the string to itself. In this way, the pattern would be duplicated.
    On removing the first and the last characters, if there exists some pattern, we would still be able to find the original string 
            somewhere in the middle, taking some characters from the first half and some from the second half.

*/

class Solution
{
public:
    bool repeatedSubstringPattern(std::string str)
    {
        return (str + str).substr(1, 2 * str.size() - 2).find(str) != -1;
    }
};

int main()
{
    return 0;
}
