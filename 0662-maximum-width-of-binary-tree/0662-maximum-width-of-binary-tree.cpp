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
    long long width = 0;
    void help(TreeNode* root) {
        if (root == NULL) {
            return;
        }
        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});
        while (q.size() != 0) {
            int lsize = q.size();
            long long base = q.front().second;
            long long fir = 0;
            long long sec = 0;
            while (lsize > 0) {
                TreeNode* tmp = q.front().first;
                long long index = q.front().second-base;
                sec = index;
                if (tmp->left != NULL) {
                    q.push({tmp->left, 2 * index + 1});
                }
                if (tmp->right != NULL) {
                    q.push({tmp->right, 2 * index + 2});
                }
                q.pop();
                lsize--;
            }
            width = max(width, sec - fir + 1);
        }
    }
    int widthOfBinaryTree(TreeNode* root) {
        help(root);
        return width;
    }
};