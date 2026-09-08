class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>jhola;

        for(int num:nums){
            if(jhola.find(num)!=jhola.end()){
            return num;
            }
            else{
                jhola.insert(num);
            }
        }
        return -1;

        
    }
};