class Solution {
public:
    int maxDepth(TreeNode* root) {

        if (root == nullptr) 
            return 0;
        
        queue<TreeNode*> q;

        q.push(root);

        int depth = 0;

        while (!q.empty()) {
            int levelsize = q.size();

            for (int i = 0; i < levelsize; i++) {

                TreeNode* curr = q.front();

                q.pop();

                if (curr->left) 
                    q.push(curr->left);
                
                if (curr->right) 
                    q.push(curr->right);
            }

                depth++;
        }

            
        
        return depth;
    }
};