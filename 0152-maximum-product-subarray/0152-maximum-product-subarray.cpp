class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProduct = nums[0];
        int minProduct = nums[0];
        int ans = nums[0];

        for(int i = 1; i<n; i++){

            if(nums[i]<0){
                swap(minProduct, maxProduct);
            }
            minProduct= min(minProduct*nums[i], nums[i]);
            maxProduct = max(maxProduct*nums[i], nums[i]);

            ans = max(ans, maxProduct);
        }
        return ans;
        
    }
};