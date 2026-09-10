class Solution {
public:
    string removeDigit(string nums, char digit) {
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i]==digit && nums[i+1]>digit){
                nums.erase(i,1);

                return nums;
            }
        }
        int j = nums.rfind(digit);

        nums.erase(j,1);

        return nums;
        
    }
};