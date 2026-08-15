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
    vector<int> a;
    vector<vector<int>> b;
    void help(TreeNode* root) {
        if (root == NULL) {
            return;
        }
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        while (q.size() != 0) {
            int lsize = q.size();
            while (lsize--) {
                TreeNode* tmp = q.front();
                if (tmp->left != NULL) {
                    q.push(tmp->left);
                }
                if (tmp->right != NULL) {
                    q.push(tmp->right);
                }
                a.push_back(tmp->val);
                q.pop();
            }
            if (level % 2 == 1) {
                reverse(a.begin(), a.end());
            }
            level++;
            b.push_back(a);
            a.clear();
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        b.clear();
        help(root);
        return b;
    }
};