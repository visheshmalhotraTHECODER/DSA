class Solution {
public:
    int maxProfit(vector<int>& nums) {

        int min = nums[0];
        int maxi = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i]<min){
                min = nums[i];
            }
            maxi = max(maxi, nums[i]-min);
        }    
        return maxi;
        
        
    }
};