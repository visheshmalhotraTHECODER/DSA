class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int>jhola;

        for(int x: nums){
            jhola[x]++;
        

           if(jhola[x]>n/2){
                return x;

            }
        } 
            
            
        
        return -1;
    }
};