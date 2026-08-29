class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int TotalSum =0;
        int LeftSum =0;
        for(int num:nums){
            TotalSum+=num;
        }
        for(int i = 0 ;i<nums.size();i++){
            int RightSum = TotalSum-LeftSum-nums[i];
            if(LeftSum==RightSum){
                return i;
            }
            LeftSum+=nums[i];
        }
        return -1;
    }
};