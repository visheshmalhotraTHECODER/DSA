class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>jhola;

        for(int i = 0; i<n ; i++){
            int required = target - nums[i];
            if(jhola.find(required)!= jhola.end()){
                return {jhola[required], i};
            }
            else{
                jhola[nums[i]] = i;
            }
        }
        return {};
        
    }
};