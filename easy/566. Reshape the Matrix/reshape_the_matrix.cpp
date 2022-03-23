#include <iostream>
#include <string>
#include <vector>

class Solution {
   public:
    std::vector<std::vector<int>> matrixReshape(std::vector<std::vector<int>>& mat, int r, int c) {
        int mat_rowcount = mat.size();
        int mat_colcount = mat[0].size();
        int total_elems = mat_rowcount * mat_colcount;
        if (r * c != total_elems) return mat;
        std::vector<std::vector<int>> new_matrix(r, std::vector<int>(c));
        int curr_row = 0, curr_col = 0;
        for (int row = 0; row < mat_rowcount; row++) {
            for (int col = 0; col < mat_colcount; col++) {
                new_matrix[curr_row][curr_col] = mat[row][col];
                curr_col++;
                if (curr_col == c) {
                    curr_col = 0;
                    curr_row++;
                }
            }
        }
        return new_matrix;
    }
};

int main() {
    std::vector<std::vector<int>> test = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };
    std::vector<std::vector<int>> out = Solution().matrixReshape(test, 2, 8);
    return 0;
}
