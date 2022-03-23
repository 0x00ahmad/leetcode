#include <iostream>

#include <string>
#include <vector>

/*

Time Complexity : O(n^2)
Space Complexity : O(1)

Best scores ::
    Runtime ~ 80ms 92%
    Memory Usage ~ 96.1MB 83%

Explaination
    the thought is very simple, every time we see a land cell, we add 4. If there are adjacent
    land cells to it's left or it's above, we reduce by 2, because the current cell and the
    adjacent cell share the same common perimeter

*/

class Solution
{
public:
    int islandPerimeter(std::vector<std::vector<int>> &grid)
    {
        int rows = grid.size(), cols = grid[0].size(), perimeter = 0;
        for (int row = 0; row < rows; ++row)
        {
            for (int col = 0; col < cols; col++)
            {
                if (grid[row][col] == 0)
                    continue;
                perimeter += 4;
                if (row > 0 && grid[row - 1][col] == 1)
                    perimeter -= 2;
                if (col > 0 && grid[row][col - 1] == 1)
                    perimeter -= 2;
            }
        }
        return perimeter;
    }
};

int main()
{

    return 0;
}
