#include <iostream>

#include <bits/stdc++.h>

/*

Time Complexity : O(1)
Space Complexity : O(1)

Best scores ::
    Runtime ~ 4ms 100%
    Memory Usage ~ 5.9MB 75%

Explaination
    to calculate the hamming distance we simple xor the numbers the
    leftover set bits are the hamming difference which we just count
    using the builtin function

*/

class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        return __builtin_popcount(x ^ y);
    }
};

int main()
{
    return 0;
}
