class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        int n = nums.size();

        vector<int> Sum(n);
        for (int i = 0; i < n; i++) {

            Sum[i] = nums[i];

            for (int i = 1; i < nums.size(); i++) {

                Sum[i] = Sum[i - 1] + nums[i];
            }
        }

        return Sum;
    }
};