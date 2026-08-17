class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> jhola;

        for(int num : nums){
            jhola.insert(num);
        }
        int ans = 0;

        for(int num:jhola){
            if(jhola.find(num-1)==jhola.end()){
                int current = num;
                int count = 1;
               

                while(jhola.find(current+1)!=jhola.end()){
                    
                    current++;
                    count++;
                }

                ans = max(ans, count);
            }

        }
        return ans;
    }
};