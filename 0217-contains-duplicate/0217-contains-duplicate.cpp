class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int>jhola;

        for(int i = 0; i<n; i++){
            if(jhola.find(nums[i])!= jhola.end()){
                return true;
            }
            else{
                jhola.insert(nums[i]);
            }
        }
        return false;
    }
};