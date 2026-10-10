class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>>ans;

        if(root==nullptr){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);

        bool lefttoright = true;

        while(!q.empty()){
            int levelsize = q.size();
            vector<int>row(levelsize);

            for(int i =0; i<levelsize; i++){
                TreeNode* node = q.front();
                q.pop();

                int index = lefttoright? i: (levelsize-1-i);

                row[index] = node->val;

                if(node->left!=nullptr){
                    q.push(node->left);
                }
                if(node->right!=nullptr){
                    q.push(node->right);
                }

            }
            lefttoright=!lefttoright;

            ans.push_back(row);
        }
            return ans;
        
    }
};