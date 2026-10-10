class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {

        vector<int> ans;

        if(root==nullptr){
            return ans;
        }

        queue<TreeNode*> q;

        q.push(root);

        while (!q.empty()) {
            int levelorder = q.size();

            for (int i = 0; i < levelorder; i++) {

                TreeNode* node = q.front();

                q.pop();

                if (i == levelorder - 1) {
                    ans.push_back(node->val);
                }
                if (node->left != nullptr) {
                    q.push(node->left);
                }
                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }
        }
        return ans;
    }
};