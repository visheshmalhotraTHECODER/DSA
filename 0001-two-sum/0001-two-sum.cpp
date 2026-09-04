class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>jhola;
        int n = nums.size();

        for(int  i = 0 ; i<n; i++){
        int required = target - nums[i];
            if(jhola.find(required)!= jhola.end()){
                return {i, jhola[required]};
            }

           else{

            jhola[nums[i]]=i;
           }
        }
        return {};
        
    }
};