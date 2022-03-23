#include <iostream>
#include <string>
#include <vector>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// class Solution {
//    public:
//     std::vector<std::vector<int>> out = {};
//     std::vector<std::vector<int>> levelOrder(TreeNode *root) {
//         _traverse(root);
//         out.emplace_back(std::vector<int>{root->val});
//         return out;
//     }
//    private:
//     void _traverse(TreeNode *root) {
//         if (root == nullptr) return;
//         std::vector<int> tmp;
//         if (root->left) tmp.push_back(root->left->val);
//         if (root->right) tmp.push_back(root->right->val);
//         if (tmp.size()) out.emplace_back(tmp);
//         _traverse(root->left);
//         _traverse(root->right);
//     }
// };

class Solution {
   public:
    std::vector<std::vector<int>> result = {};
    std::vector<std::vector<int>> levelOrder(TreeNode *root) {
        if (!root) return result;
        std::vector<int> row;
        std::queue<TreeNode *> q;
        q.push(root);
        int count = 1;
        while (!q.empty()) {
            if (q.front()->left) q.push(q.front()->left);
            if (q.front()->right) q.push(q.front()->right);
            row.push_back(q.front()->val);
            q.pop();
            if (!--count) {
                result.emplace_back(row);
                row.clear();
                count = q.size();
            }
        }
        return result;
    }
};

int main() {
    return 0;
}
