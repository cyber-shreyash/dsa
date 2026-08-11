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
    void bfs(TreeNode* root, vector<int>& a, vector<vector<int>>& b) {
        queue<TreeNode*> q;
        if (root == NULL) {
            return;
        }
        q.push(root);

        while (q.size()) {
            int level_size = q.size();
            while (level_size--) {
                TreeNode* tmp = q.front();

                a.push_back(tmp->val);
                if (tmp->left != NULL) {
                    q.push(tmp->left);
                }
                if (tmp->right != NULL) {
                    q.push(tmp->right);
                }
                q.pop();
            }
            b.push_back(a);
            a.clear();
        }
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<int> a;
        vector<vector<int>> b;
        bfs(root, a, b);
        reverse(b.begin(), b.end());
        return b;
    }
};

