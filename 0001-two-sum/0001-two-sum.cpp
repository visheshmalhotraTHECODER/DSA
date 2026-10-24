class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        unordered_map<int,int>jhola;

        for(int i = 0; i<n; i++){
            int req = target - nums[i];
            if(jhola.find(req)!=jhola.end()){
                return {jhola[req], i};
            }
            jhola[nums[i]] = i;
        }
        return {};
    }
};