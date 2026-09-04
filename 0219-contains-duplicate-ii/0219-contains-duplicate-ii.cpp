class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> jhola;

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (jhola.find(nums[i]) != jhola.end()) 
                return true;

            jhola[nums[i]] = i;

          if(i>=k){
            jhola.erase(nums[i-k]);
        }    
    }
        return false;
    }
};