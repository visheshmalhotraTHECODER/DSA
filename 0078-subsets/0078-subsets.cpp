class Solution {
public:
    vector<vector<int>>ans;
    vector<int>subset;

    void solve(vector<int>&nums,int index){

        if(index==nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[index]);

        solve(nums,index+1);

        subset.pop_back();

        solve(nums,index+1);

    }

    vector<vector<int>> subsets(vector<int>& nums) {

        solve(nums,0);


        return ans;

        
    }
};