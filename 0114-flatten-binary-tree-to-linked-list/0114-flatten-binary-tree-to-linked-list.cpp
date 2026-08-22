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
    void flatit(TreeNode* root, vector<int>& a) {
        int n = a.size();
        TreeNode*root1=root;
        for (int i = 1; i < n; i++) {
            TreeNode* nn = new TreeNode(a[i]);
            root->right=nn;
            root->left=NULL;
            root=nn;
        }
        root=root1;
    }
    void preorder(TreeNode* root, vector<int>& a) {
        if (root == NULL) {
            return;
        }
        a.push_back(root->val);
        preorder(root->left, a);
        preorder(root->right, a);
    }
    void flatten(TreeNode* root) {
        vector<int> a;
        preorder(root, a);
        flatit(root, a);
    }
};