class Solution {
public:
    void solve(TreeNode* root , vector<int>& nums){
        if(root==nullptr){
            return;
        }
        solve(root->left, nums);
        nums.push_back(root->val);
        solve(root->right, nums);

        
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int>nums;

        solve(root, nums);

        return nums[k-1];


        
    }
};