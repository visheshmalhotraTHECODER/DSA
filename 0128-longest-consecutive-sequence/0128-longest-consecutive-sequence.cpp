class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int>jhola(nums.begin(), nums.end());
        int longest =0;

        for(int x : jhola){
            if(jhola.find(x-1) != jhola.end()){
                continue;
            }
            int curr = x;
            int len = 1;

            while(jhola.find(curr + 1) != jhola.end()){
                curr++;
                len++;
            }
            longest = max(longest, len);

        }


        return longest;
    }
};