class Solution {
public:
    int getHeight(TreeNode* node){
        if(node==nullptr){
            return 0;
        }
        return 1+max(getHeight(node->left),getHeight(node->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        int leftheight =getHeight(root->left);
        int rightheight =getHeight(root->right);

        if(abs(leftheight-rightheight)>1){
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
        
        
    }
};