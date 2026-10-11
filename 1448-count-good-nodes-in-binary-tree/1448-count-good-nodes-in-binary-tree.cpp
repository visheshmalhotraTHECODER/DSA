class Solution {
public:
    int solve(TreeNode* node , int maxSofar){

        if(node==nullptr){
            return 0;
        }

        int count = 0;

        if(node->val >= maxSofar){
            
            count++;

            maxSofar = node->val;
        }
        count+=solve(node->left, maxSofar);
        count+=solve(node->right, maxSofar);

        return count;
    }
    int goodNodes(TreeNode* root) {

        return solve(root, root->val);
        
    }
};