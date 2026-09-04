class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> jhola;

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (jhola.find(nums[i]) != jhola.end()) {
                if (i - jhola[nums[i]] <= k)
                    return true;
            }

            jhola[nums[i]] = i;
        }
        return false;
    }
};