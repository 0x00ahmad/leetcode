#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

/*

Time Complexity : O(n) for the traversal
Space Complexity : O(n) for the result vector

Best scores ::
    Runtime - 12ms
    Memory Usage ~ 24MB

Properties of the BST
    - leftNode <= rootNode <= rightNode && All nodes in left Subtree <= rootNode <= All nodes in right subtree
    - Using the above two properties, we can conclude that if there are duplicates in the tree,
        they will always be next to each other in the inOrder traversal of the tree.
    - Since inOrder traversal will always be in sorted order, so, we can easily keep track of frequency
        of elements by keeping a single variable and then resetting it once a new element is encountered.
    - In the meantime, we need to keep a variable which will store the max frequency of any element till now.
    - If at some point, there is an element whose frequency equals max frequency,
        we can include it in the answer as per the requirement of this questions.
    - If the frequency of element is more than maxElement,
        clear the answer array and insert this new element into answer array.

Explaination
    so keeping the properties in mind, we can solve the problem with the following simple functions
        - do an inorder traversal of the tree
        - for each value of the node, perform the checks:
            - if the curr val is equal to the previous node value, then increment the 'curr' by 1
            - else just reset the 'curr' to 1
            - if the 'curr' is greater than the current max
                - set the current max to this 'curr'
                - and reset the resultant vector to have only the current node val
            - else if it's equal to the current max
                - append the current node value to the resultant vector
            - finally, just set the 'prev' as the current node value


*/

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
   public:
    int maxVal = -1, curr = -1, prev = -1;
    std::vector<int> findMode(TreeNode *root) {
        std::vector<int> result;
        inOrderTraversal(root, result);
        return result;
    }

   private:
    void inOrderTraversal(TreeNode *root, std::vector<int> &res) {
        if (root == NULL) return;
        inOrderTraversal(root->left, res);
        handleValue(root->val, res);
        inOrderTraversal(root->right, res);
    }
    void handleValue(int val, std::vector<int> &res) {
        curr = val == prev ? curr + 1 : 1;
        if (curr > maxVal) {
            res.clear();
            res.push_back(val);
            maxVal = curr;
        } else if (curr == maxVal) {
            res.push_back(val);
        }
        prev = val;
    }
};

int main() {
    return 0;
}

// * my implementation, is ok but slow. Like 39ms slow
// class Solution {
//    public:
//     std::vector<int> findMode(TreeNode *root) {
//         std::vector<int> result;
//         if (!root) return result;
//         if (!root->left && !root->right) return std::vector<int>{root->val};
//         std::map<int, int> dict;
//         _traverseAndFindModes(root, dict);
//         int curr_max = 0;
//         for (auto const &each : dict) {
//             if (each.second > curr_max) curr_max = each.second;
//         }
//         for (auto const &each : dict) {
//             if (each.second == curr_max) result.push_back(each.first);
//         }
//         return result;
//     }
//    private:
//     void _traverseAndFindModes(TreeNode *root, std::map<int, int> &d) {
//         if (!root) return;
//         if (d.find(root->val) == d.end())
//             d[root->val] = 0;
//         d[root->val]++;
//         _traverseAndFindModes(root->left, d);
//         _traverseAndFindModes(root->right, d);
//     }
// };