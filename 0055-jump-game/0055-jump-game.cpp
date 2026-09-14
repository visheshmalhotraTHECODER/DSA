class Solution {
public:
    int t[10001];
    bool solve(vector<int>& nums, int n , int curr_idx){
        if(curr_idx==n-1){
            return true;
        }
        if(t[curr_idx]!=-1){
            return t[curr_idx];
        }
        for(int i = 1; i<=nums[curr_idx]; i++){
            if(solve(nums, n , curr_idx+i)==true){
                return t[curr_idx]=true;
            }
        }
        return t[curr_idx]= false;
    }

    bool canJump(vector<int>& nums) {

        int n  = nums.size();

        memset(t, -1, sizeof(t));

        return solve(nums, n , 0 );
        
    }
};