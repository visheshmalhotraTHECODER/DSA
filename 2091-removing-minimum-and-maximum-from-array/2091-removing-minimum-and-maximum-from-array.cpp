class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minIndx = min_element(nums.begin(),nums.end())-begin(nums);
        int maxIndx = max_element(nums.begin(), nums.end())-begin(nums);

        int left = min(minIndx, maxIndx);
        int right = max(minIndx, maxIndx);

        return min({n-left,right+1,left+1+n-right});


    }
};