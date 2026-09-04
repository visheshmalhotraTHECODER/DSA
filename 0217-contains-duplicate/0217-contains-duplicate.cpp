class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int>jhola;
        int n  = nums.size();

        for(int i = 0; i<nums.size(); i++){
            if(jhola.find(nums[i])!=jhola.end()){
                return true;
            }
            else{
                jhola.insert(nums[i]);
            }
        }
        return false;
    }
};