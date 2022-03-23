#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

/*

Time Complexity : O(n*2)
Space Complexity : O(n+m) for the map & the stack

Best scores ::
    Runtime - 0ms
    Memory Usage ~ 8.7MB

Explaination
    I need to understand this also by implementing it in different languages & debugging it...

*/

class Solution {
   public:
    std::vector<int> nextGreaterElement(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> output(nums1.size(), -1);
        std::stack<int> n_stack;
        std::unordered_map<int, int> n_map;
        for (int i = 0; i < nums2.size(); i++) {
            int el = nums2[i];
            while (!n_stack.empty() && el > n_stack.top()) {
                n_map[n_stack.top()] = el;
                n_stack.pop();
            }
            n_stack.push(el);
        }
        for (int i = 0; i < nums1.size(); i++)
            if (n_map.find(nums1[i]) != n_map.end())
                output[i] = n_map[nums1[i]];
        return output;
    }
};

int main() {
    return 0;
}

// ? works but you forgot the order matters.
// class Solution {
//    public:
//     std::vector<int> nextGreaterElement(std::vector<int>& nums1, std::vector<int>& nums2) {
//         std::vector<int> output(nums1.size(), -1);
//         std::sort(nums1.begin(), nums1.end());
//         int curr_o_idx = 0;
//         int n1s = nums1.size();
//         int n2s = nums2.size();
//         for (int j = 0; j < n2s; j++) {
//             if (std::binary_search(nums1.begin(), nums1.end(), nums2[j])) {
//                 for (int k = j; k < n2s; k++) {
//                     if (nums2[k] > nums2[j]) {
//                         output[curr_o_idx] = nums2[k];
//                         break;
//                     }
//                 }
//                 curr_o_idx++;
//             }
//         }
//         return output;
//     }
// };
