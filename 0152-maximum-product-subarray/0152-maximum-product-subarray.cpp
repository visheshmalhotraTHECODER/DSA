class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProduct = INT_MIN;

        for(int i = 0; i<n; i++){
            int Product = 1;
            for(int j = i; j<n; j++){
                Product*=nums[j];

                maxProduct = max(maxProduct,Product);
            }

        }
        return maxProduct;
    }
};