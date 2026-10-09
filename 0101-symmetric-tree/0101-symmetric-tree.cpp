class Solution {
public:
    bool isMirror(TreeNode* T1, TreeNode* T2) {
        if (T1 == nullptr && T2 == nullptr) 
            return true;
        
        if (T1 == nullptr || T2 == nullptr || T1->val != T2->val) 
            return false;
        
        return isMirror(T1->left, T2->right) && isMirror(T1->right, T2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) 
            return true;
        
        return isMirror(root->left, root->right);
    }
};