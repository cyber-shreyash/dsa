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
    TreeNode* ans=NULL;
    void help(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==NULL){
            return;
        }
        if(root->val > q->val){
            help(root->left,p,q);
        }
        if(root->val < p->val){
            help(root->right,p,q);
        }
        if(root->val >= p->val && root->val<=q->val){
            ans=root;
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val>q->val){
            help(root,q,p);
        }
        else{
            help(root,p,q);
        }
        return ans;
    }
};