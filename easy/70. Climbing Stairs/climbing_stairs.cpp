#include <iostream>

class Solution {
public:
  int climbStairs(int n) {
    if (n <= 2)
      return n;
    int prev_permutations = 1, curr_permutations = 2;
    for (int i = 3; i <= n; i++) {
      int c = prev_permutations + curr_permutations;
      prev_permutations = curr_permutations;
      curr_permutations = c;
    }
    return curr_permutations;
  }
};

int main() { return 0; }
