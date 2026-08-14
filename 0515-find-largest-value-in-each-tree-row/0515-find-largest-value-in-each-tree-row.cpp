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
    vector<int>a;
    void help(TreeNode* root){
        if(root==NULL){
            return ;
        }
        queue<TreeNode*>q;
        q.push(root);//pushing the node
        while(q.size()!=0){
            int lsize=q.size();
                    int maxi=INT_MIN;

            while(lsize--){
                TreeNode *tmp=q.front();
                maxi=max(maxi,tmp->val);
                if(tmp->left!=NULL){
                    q.push(tmp->left);
                }
                if(tmp->right!=NULL){
                    q.push(tmp->right);
                }
                q.pop();
            }
            a.push_back(maxi);
            maxi=0;
        }
    }
    vector<int> largestValues(TreeNode* root) {
        help(root);
        return a;
    }
};