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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> a;
        long long sum = 0;
        queue<TreeNode*> q;
        q.push(root);
        while (q.size() > 0) {
            int ls = q.size();
            while (ls--) {
                TreeNode* t = q.front();
                sum += t->val;
                if (t->left != NULL) {
                    q.push(t->left);
                }
                if (t->right != NULL) {
                    q.push(t->right);
                }
                q.pop();
            }
            a.push_back(sum);
            sum = 0;
        }
        sort(a.begin(), a.end());
        if (a.size() < k) {
            return -1;
        }
        int n = a.size();
        return a[n - k];
    }
};