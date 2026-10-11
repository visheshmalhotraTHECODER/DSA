class Solution {
public:
    int maxDeiameter = 0;

    int solve(TreeNode* node){
        if(node==nullptr){
            return 0;
        }
        int leftheight = solve(node->left);
        int rightheight = solve(node->right);
        maxDeiameter = max(maxDeiameter, leftheight + rightheight);
        return 1 + max(leftheight, rightheight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        solve(root);
        return maxDeiameter;
    }
};