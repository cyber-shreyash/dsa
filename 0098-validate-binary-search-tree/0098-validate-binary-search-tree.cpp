class Solution {
public:
    void inorder(TreeNode* root, vector<int>& a){
        if(root==NULL)
            return;

        inorder(root->left,a);
        a.push_back(root->val);
        inorder(root->right,a);
    }

    bool isValidBST(TreeNode* root) {
        vector<int> a;
        inorder(root,a);

        for(int i=1;i<a.size();i++){
            if(a[i] <= a[i-1])   // strictly increasing
                return false;
        }

        return true;
    }
};