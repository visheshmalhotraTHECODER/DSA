class Solution {
public:
    int solve(vector<int>& nums, vector<int> &t, int n){

        if(n==1){
            return nums[0];
        }
        if(n==0){
            return 0;
        }
        if(t[n]!=-1){
            return t[n];
        }
        t[n] = max(nums[n-1] + solve(nums,t , n-2) , solve(nums, t, n-1));

        return t[n];

    }
    int rob(vector<int>& nums) {

        int n = nums.size();

        vector<int>t(n+1,-1);

        return solve(nums, t , n)     ;   
    }
};