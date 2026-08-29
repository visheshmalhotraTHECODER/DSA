class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>jhola;
        jhola[0] = 1;
        int prefix =0;
        int ans = 0;

        for(int i = 0 ; i<nums.size(); i++){
           prefix+=nums[i];
           int required = prefix - k;

           if(jhola.find(required)!= jhola.end()){
                  ans+=jhola[required];
           } 
           jhola[prefix]++;

        }
        return  ans;
        
    }
};