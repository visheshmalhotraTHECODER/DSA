class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>jhola;

        for(int i = 0; i<nums.size(); i++){

           if(jhola.find(nums[i])!=jhola.end() && (i - jhola[nums[i]]<=k)){
            
                return true;
            }

           
           jhola[nums[i]] = i;
        }
        
        return false;
        
    }
};