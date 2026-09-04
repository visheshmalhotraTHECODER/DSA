class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n = nums.size();

        for(int i = 0 ; i<n; i++){

            int maxElem = INT_MIN;
            int minElem = INT_MAX;

            for(int j= 0; j<= i ;j++){
                maxElem = max(maxElem, nums[j]);
            }

            for(int j = i; j<n; j++){
                minElem = min(minElem , nums[j]);
            }

           if(maxElem-minElem <= k){
                return i;   
            }
        }
        return -1;
        
    }
};