class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int,int>jhola;
        int n = nums.size();

        for(int num:nums){
            jhola[num]++;

            if(jhola[num]>n/2){
                return num;
            }
        }
        return -1;

    }
};