class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

        if(root==nullptr){
            return 0;
        }
        TreeNode* right =invertTree(root->right);
        TreeNode* left = invertTree(root->left);

        root->right= left;
        root->left= right;

        return root;


        
    }
};