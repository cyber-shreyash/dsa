/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* ans = NULL;
    int help(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) {
            return 0;
        }
        int left = help(root->left, p, q);
        int right = help(root->right, p, q);
        int self = 0;
        if (root->val == p->val || root->val == q->val) {
            self++;
        }
        int total = left + right + self;

        if (total == 2 && ans == NULL) {
            ans = root;
        }
        return total;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        help(root, p, q);
        return ans;
    }
};