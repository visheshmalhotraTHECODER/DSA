class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>jhola;

        for(int i = 0; i<n; i++){

            if(jhola.find(nums[i]) != jhola.end() &&
              i - jhola[nums[i]] <= k){
                return true;

            }
            jhola[nums[i]] = i;

        }
        return false;
    }
};