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
    void help(TreeNode* root, int targetSum, vector<int>& a,
              vector<vector<int>>& b, int cursum) {
        if (root == NULL) {
            return;
        }
        cursum += root->val;

        a.push_back(root->val);
        if (!root->left && !root->right && cursum == targetSum) {
            b.push_back(a);
        }
        help(root->left, targetSum, a, b, cursum);
        help(root->right, targetSum, a, b, cursum);
        a.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> a;
        vector<vector<int>> b;
        help(root, targetSum, a, b, 0);
        return b;
    }
};