class Solution {
public:
    int solve(vector<int>& nums, int start, int n , vector<int>& t){

        if(start>n){
            return 0 ;
        }

        if(t[start]!=-1){
            return t[start];
        }
        return t[start] = max(nums[start]+ solve(nums, start+2, n , t), solve(nums, start+1, n, t));
    }
    int rob(vector<int>& nums) {

        int n  = nums.size();

        if(n==1){
            return nums[0];
        }

        vector<int>t1(n+1,-1);

        int house_0th_rob = solve(nums, 0, n-2 , t1);

        vector<int>t2(n+1,-1);

        int house_1st_rob = solve(nums , 1 , n-1 , t2 );

        return max(house_0th_rob, house_1st_rob);
        
    }
};