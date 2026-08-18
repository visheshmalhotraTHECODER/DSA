class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int minPrice = nums[0];

        int maxProfit = 0;

        for(int i = 1; i<nums.size(); i++){

            int profit = nums[i]-minPrice;

            maxProfit = max(maxProfit, profit);

            minPrice = min(minPrice, nums[i]);
        }

        return maxProfit;
        
    }
};