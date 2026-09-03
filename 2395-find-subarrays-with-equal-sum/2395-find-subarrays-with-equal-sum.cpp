class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n);

        for(int i = 1; i<n; i++){

              dp[i] = nums[i] +nums[i-1];

        }
            for(int i = 1; i<n; i++){
            for(int j = i+1; j<n; j++){
              

                if(dp[i] == dp[j]){
                    return true;
                }
            }
        }
        return false;
        
    }
};