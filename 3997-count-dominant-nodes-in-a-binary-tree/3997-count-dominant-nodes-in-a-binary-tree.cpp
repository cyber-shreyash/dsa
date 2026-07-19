/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int s=0;
    int helper(TreeNode *root){
        if(root==NULL){
            return INT_MIN;
        }
        int lmax=helper(root->left);
        int rmax=helper(root->right);
        int maxi=max(root->val,max(lmax,rmax));
        if(root->val==maxi){
            s++;
        }
        return maxi;
    }
    int countDominantNodes(TreeNode* root) {
        helper(root);
        return s;
    }
};