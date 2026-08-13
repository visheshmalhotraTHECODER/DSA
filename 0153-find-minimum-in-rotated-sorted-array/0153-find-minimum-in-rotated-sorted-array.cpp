class Solution {
public:
    int mini = INT_MAX;
    int findMin(vector<int>& nums) {
        int n = nums.size();
        for(int i =0; i<n; i++){
           
           if(nums[i]<mini){
            mini = nums[i];
           }
        }
        return mini;
        
    }
};