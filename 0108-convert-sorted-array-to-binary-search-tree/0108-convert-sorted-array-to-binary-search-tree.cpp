class Solution {
public:
    TreeNode* help(vector<int>& nums) {
        if (nums.empty()) {
            return NULL;
        }
        int n = nums.size();
        int mid = n / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        vector<int> left(nums.begin(), nums.begin() + mid);
        vector<int> right(nums.begin() + mid + 1, nums.end());
        root->left = help(left);
        root->right = help(right);
        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return help(nums);
    }
};