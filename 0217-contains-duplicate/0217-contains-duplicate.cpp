class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>jhola;
        int n = nums.size();
        for(int num:nums){
            if(jhola.find(num)!= jhola.end()){
                return true;
            }
            else{
                jhola.insert(num);
            }
        }
        return false;
        
    }
};