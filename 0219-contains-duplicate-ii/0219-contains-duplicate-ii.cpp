class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
 
        int n = nums.size();

        unordered_set<int> jhola;

        for(int i = 0; i<n; i++){

            if(jhola.find(nums[i])!= jhola.end()){
                return true;
            }
            
            jhola.insert(nums[i]);
            
            if(jhola.size()>k){

                jhola.erase(nums[i-k]);
            }

        }
        return false;
    }
};