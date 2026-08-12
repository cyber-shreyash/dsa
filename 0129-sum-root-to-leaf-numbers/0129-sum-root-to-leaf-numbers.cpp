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
    void help(TreeNode *root,int &sum,int s){
        if(root==NULL){
            return ;
        }
        s+=root->val;
        if(root->left==NULL && root->right==NULL){
            sum+=s;
            return ;
        }
        if(root->left!=NULL){
            help(root->left,sum,s*10);
        }
        if(root->right!=NULL){
            help(root->right,sum,s*10);
        }
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        int s=0;
        help(root,sum,0);
        return sum;
    }
};