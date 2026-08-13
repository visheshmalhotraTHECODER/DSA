class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),1);

        int pre = 1;
        int post =1;


        for(int i = 0; i<nums.size(); i++){

            ans[i] =pre;
            pre =nums[i]*pre;
            
        }
        for(int i = nums.size()-1; i>=0;i--){
            ans[i] = post*ans[i];
            post =post*nums[i];
        }
        return ans;
        
    }
};