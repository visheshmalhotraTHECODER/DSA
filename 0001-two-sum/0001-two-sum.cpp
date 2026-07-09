class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>jhola;

        for(int i = 0; i<nums.size(); i++){

            int required = target-nums[i];

            if(jhola.find(required)!=jhola.end()){
                return {jhola[required],i};
            }
            jhola[nums[i]] = i;


        }
        return{};
        
    }
};