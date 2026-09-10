/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    pair<int, int> help(TreeNode* root, int &count) {
        if (root == NULL) {
            return {0, 0};
        }
        auto [leftsum, leftcount] = help(root->left, count);
        auto [rightsum, rightcount] = help(root->right, count);

        int subsum = leftsum + rightsum + root->val;
        int subcount = leftcount + rightcount + 1;

        if ((subsum / subcount) == root->val) {
            count++;
        }
        return {subsum, subcount};
    }
    int averageOfSubtree(TreeNode* root) {
        int count = 0;
        help(root, count);
        return count;
    }
};