class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();

        int left = 0;

        int maxProfit = 0;
        
        for(int right = 1; right<n; right++){

            int profit = nums[right]-nums[left];

            maxProfit = max(maxProfit, profit);

            if(nums[right]<nums[left]){
                left= right;
            }

        }
        return maxProfit;
        
    }
};