#include <iostream>
#include <string>
#include <vector>

class Solution {
   public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        m--, n--;
        int idx = nums1.size();
        while (idx >= 0) {
            // base case
            if (m < 0)
                nums1[idx] = nums2[n--];
            else if (n < 0)
                nums1[idx] = nums1[m--];
            // iterative case
            else {
                if (nums1[m] > nums2[n])
                    nums1[idx] = nums1[m--];
                else
                    nums1[idx] = nums2[n--];
            }
            idx--;
        }
    }
};

int main() {
    return 0;
}
