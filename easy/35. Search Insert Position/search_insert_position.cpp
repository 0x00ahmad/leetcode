#include <iostream>
#include <vector>

class Solution {
   public:
    int searchInsert(std::vector<int>& nums, int target) {
        int n_len = nums.size();
        int low = 0, high = n_len - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};

int main() {
    return 0;
}
