class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int  n = nums.size();

        int slidingSum = 0;

        for(int i = 0; i<k; i++){
            slidingSum+=nums[i];  
        }
        int maxSum = slidingSum;

        for(int  i = k; i<n; i++){
            slidingSum+=nums[i];
            slidingSum-=nums[i-k];

            maxSum = max(maxSum, slidingSum);
        }
        return (double)maxSum/k;
        
    }
};