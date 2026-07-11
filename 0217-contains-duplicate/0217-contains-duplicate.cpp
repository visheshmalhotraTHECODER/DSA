class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int>jhola;

        for(int i =0; i<nums.size(); i++){
            if(jhola.find(nums[i])!= jhola.end()){
                return true;
            }
            jhola.insert(nums[i]);

        }
        return false;
        
    }
};